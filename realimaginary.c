//conditional operator to find real,imaginary roots.
#include<stdio.h>
#include<math.h>
 
int main()
{
   clrscr();
   float a,b,c;
   float d;
   printf("\nENter the coeficients of quadratic equation");
   scanf("%f%f%f",&a,&b,&c);
 
    d=b*b-4*a*c;
 
    (d==0)?
    printf("\nroots are equal and are %f",(-b/(2*a))):
   ((d>0)?printf("\nroots are real and are %f and %f",((-b+sqrt(d))/(2*a)),((-b-sqrt(d))/(2*a))):
    printf("\nroots are imaginery"));
    getch();
}
