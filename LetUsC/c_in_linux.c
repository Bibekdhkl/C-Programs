#include<stdio.h>
// #include<sys/types.h>
#include<unistd.h>

int main(){
      /*
       Compiling and Executing C program in Linux:
            To compile: gcc filename.c
            On successful compilation it produces a.out file which can now be executed by:
            ./a.out       
      */
      printf("\nProcess ID=%d\n",getpid());//It returns process ID of the calling process
	return 0;
      //fork splits the running process into two processes:parent/child
      printf("Before Forking: \n");
      fork();
      //fork is used when we want to do two task simultaneously
      printf("After Forking\n");//this is printed twice once by parent and second time by child

}
