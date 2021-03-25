#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
      FILE *fs;
      char* s[100];
      fs=fopen("filewritten.txt","w");
      if(fs==NULL){
            printf("Cannot load the file");
            exit(1);
      }
      fgets(s,1000,stdin);
      //stdin means input related from standard input device - keyboard
      /*Instead of fgets we can also use fgetc which takes individual character till the entered character is not equal to \n  which can be written as:
            while((s = fgetc(stdin)) != '\n'){
                  fputc(s,fs);
            }   
      */
      fputs(s,fs);
      fputs("\n",fs);
      fclose(fs);
      return 0;
}