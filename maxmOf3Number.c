//calculating maximum of 3 numbers using conditional operator(Ternary Operator) 
#include <stdio.h>
#include <conio.h>

int main()
{   
    clrscr();
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    ((a>b)&&(a>c))?printf("%d is maximum",a):((b>c)?printf("%d is maximum",b):printf("%d is     maximum",c));
    return 0;
}
