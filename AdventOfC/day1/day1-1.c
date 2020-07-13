#include <stdio.h>
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int main(){
   int i;
   FILE * fp;
   char * line = NULL;
   size_t len = 0;
   ssize_t read;
   int sum=0;
   int num=0;
   fp = fopen("input-1.csv", "r");
   if (fp == NULL)
       exit(EXIT_FAILURE);

   while ((read = getline(&line, &len, fp)) != -1) {
       printf("\n%s", line);
       num = atoi(line);
       printf("%d num\n", num);
       sum += (num/3)-2;
       }

   printf("output:%d", sum);
}
