#include<stdio.h>
#include<stdlib.h>
int main(){
      char *fp,ch;
      int num=0,space=0;
      fp=fopen("filewritten.txt","r");
      if(fp==NULL){
            printf("The file is not found");
            exit(0);
      }
      while(1){
            ch=fgetc(fp);
            if(ch==EOF){//reads a character till the end of file
                  break;
            }
            num++;
            if(ch==' '){//here " " is not working
                  space++;
            }
      }
      fclose(fp);
      printf("The total charaacters are: %d and spaces are: %d",num,space);
      return 0;
}