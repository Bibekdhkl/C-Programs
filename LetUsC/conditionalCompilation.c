#include <stdio.h>
#define m 10
int main(){
      // printf("Program begins\n");
      #ifdef m
            printf("Statement 1\n");
            printf("Statement 2\n");
      #else
            printf("Statement error\n");
      #endif
      printf("-------------------\n");
      #ifndef m
            printf("Statement 1\n");
            printf("Statement 2\n");
      #else
            printf("Statement error\n");
      #endif

      printf("-------------------\n");
       #if m
            printf("Statement 1\n");
            printf("Statement 2\n");
      #else
            printf("Statement error\n");
      #endif
      printf("-------------------\n");
      
      // printf("Common codes to be printed\n");
      // printf("Program ends\n");

}