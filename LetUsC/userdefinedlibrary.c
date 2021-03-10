#include<stdio.h>
#include"headerfile.h"
// Simply make a new file and save it with necessary functions required with extension .h and then you have successfully created a header file which is ready to use in any of your c program that is present in same folder. To include userdefined library files you have to enclose them with double inverted comma as: "headerfilename.h" and have to use them using preprocessing directive #include. In this way, you are ready to use your own header files in C program which works in VS code but has different method in Turbo C/C++ and other compilers.    Things to be considered while defining a user defined library files: 1) Make sure that you haven't made a typo mistake in creating a file and including the file 2) Don't define main function in header file

int main(){
      int num;
      printf("Enter a number:");
      scanf("%d",&num);
      long int f=fact(num);
      int s=square(num);
      printf("The Factorial is: %ld and square is: %d",f,s);
      return 0;
}