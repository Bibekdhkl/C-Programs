#include<stdio.h>

#define PI 3.141592
#define area(x) (PI*x*x)
//for small line code use macro instead of functions
#define FINISH printf("The Program is executed!");

int main(){
      int r;
      float Area;
      printf("Enter radius of a circle");
      scanf("%d",&r);
      Area=area(r);
      printf("The area of circle with radius %d is %.2f\n",r,Area);
      FINISH
      return 0;
}