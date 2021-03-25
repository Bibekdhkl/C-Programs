#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
      FILE *fs;
      char s[100];
      fs=fopen("filewritten.txt","r");
      if(fs==NULL){
            printf("Cannot load the file");
            exit(1);
      }
      while(fgets(s,7,fs)!=NULL){
         printf("%s",s);
      }
      printf("\n");
      fclose(fs);
      return 0;

}