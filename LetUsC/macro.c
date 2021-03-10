#include<stdio.h>

#define pi 3.14

int main(){
      int r;
      scanf("%d",&r);
      printf("Area is: %f",(pi*r*r));
      #undef pi
      // prinf("%f",pi); 
      // If above line is uncommented it will create an error
      return 1;
}