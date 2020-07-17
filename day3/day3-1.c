#include <stdio.h>
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
  char line1[301];
  char line2[301];
  int length = 301;
  int line1_H,line1_V,line2_H,line2_V = 0;
  size_t len = 0;
  int ar_counter=0;
  FILE * fp;
  char * line = NULL;
  char test[]="";
  ssize_t read;
  fp = fopen("input1.csv", "r");
  if (fp == NULL){
    exit(EXIT_FAILURE);
  }
  read = getline(&line, &len, fp);
  strncat(test,&line[0],1);
  printf("\n%s", line);
  for(int i=0;i<strlen(line);i++){
    if(*line == ','){
      printf("\n%s", test);
      ar_counter++;
    }
    else{
      strncat(test,&line[i],1);
    }
    line++;
  }
  return 0;
}
