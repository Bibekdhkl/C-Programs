#include<stdio.h>
#pragma warn

void main(){
      int value=1;
      float pi=3.1415167890123456;
      printf("Short signed=%d\n",&value);
      printf("Short Unsigned=%u\n",&value);
      printf("long signed=%ld\n",&value);
      printf("long Unsigned=%lu\n",&value);
      printf("Unsigned Hexa decimal=%x\n",&value);
      printf("Unsigned octal=%o\n",&value);

      printf("----------------------\n");
      printf("The Value of PI is:%5.2fand\t\t%10f\n",pi,pi);
      printf("The Value of PI is:%6.2f and\t\t%-.2f\n",pi,pi);
      printf("The Value of PI is:%15f and\t\t%-15f\n",pi,pi);//-15 floats the value to the left
      printf("The Value of PI is:%-15f and\t\t%1f\n",pi,pi);

}