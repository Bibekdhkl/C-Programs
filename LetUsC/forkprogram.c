#include<stdio.h>
#include<unistd.h>//fork is defined at uninstd.h

/* 
Linux Internally uses fork to produce new child process
To list all these process :- $ ps -A
'init' is father of all these process
*/

int main(){
      int pid;

      pid = fork();
      if (pid==0){
            printf("Child: Child's process \nChild: Child PID %d\n",getpid());
            printf("Child: Parent's PID %d\n",getppid());//returns PID of the parent calling process
      }
      else  {
            printf("Parent: Parent process \nParent: Parent's PID %d\n",getpid());
            printf("Parent: Child's PID %d\n",pid);
      }
      return 0;
}
/*
OUTPUT:
Parent: Parent process 
Parent: Parent's PID 8992
Parent: Child's PID 8993
Child: Child's process 
Child: Child PID 8993
Child: Parent's PID 8993
*/