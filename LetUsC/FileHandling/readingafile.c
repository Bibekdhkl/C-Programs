#include<stdio.h>
#include<stdlib.h>

int main(){
      FILE *fp;
      //here fp is structure pointer
      char ch;
      // printf("------------------------\n\n");
      fp=fopen("helloworld.c","r");/* fopen function searches the file in the disk to be opened and then it loads the file from the disk into a place in memory called buffer(=>we are storing the file in buffer to do faster reading and writing operation as if we were doing it from the main disk like in floppy disk system we had to start rotating the disk everytime to search characters which will take long time to read from the disk), which sets up the character pointer that points to the first character of the buffer*/
      if(fp==NULL){
            //if file is unable to open then this condition is applied
            puts("cannot open file");
            exit(1);
            //0 indicates normal termination whereas non-zero indicates abnormal termination
      }
      while(1){
            ch=fgetc(fp);
            //fgcet/getc reads the character from a current pointer position
            //once the file is opened we no longer refer the file by it's name but by the pointer fp
            if(ch==EOF)
            //EOF(end of file) is a macro defined at stdio.h
                  break;
            printf("%c",ch);
      }
      //we read the file till the character is left to read from file and after that we are out of loop
      printf("--------------");
      printf("\n");
 
      fclose(fp);
      //on closing the file the buffer associated with the file is removed from the memory
      //the characters in the buffer would be written back to the file on the disk
      return 0;
}