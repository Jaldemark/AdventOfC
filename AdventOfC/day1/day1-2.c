#include <stdio.h>
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int main(){
   FILE * fp;
   char * line = NULL;
   size_t len = 0;
   ssize_t read;
   int sum=0;
   int num=0;
   int temp =0;
   fp = fopen("input-2.csv", "r");
   if (fp == NULL){
      exit(EXIT_FAILURE);
    }
    while ((read = getline(&line, &len, fp)) != -1) {
      printf("\n%s", line);
      num = atoi(line);
      while(num>=0){
        temp = (num/3);
        if(temp>=2){
          temp-=2;
          sum += temp;
          num = temp;
        }
        else break;

       }
     }

   printf("output:%d", sum);
}
