// chapter 1 Exercise B(H)=> Paper of size A0 has dimensions 1198mm x 841mm. Each subsequent size A(n) is defined as A(n-1) cut in half parallel to its shorter sides. Write a program to calculate and print paper sizes A0, A1, A2,...A8.
#include<stdio.h>

void main(){      
      int a=1189,b=841;
      for(int i=0;i<=8;i++){
            printf("For A(%d)\t",i);
            printf("%d*%d\n",a,b);
            a=a/2;
            b=b/2;
      }
}