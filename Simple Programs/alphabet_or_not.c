// to check if a input is alphabet or not
#include<stdio.h>

  void  check( char x);  // function prototype
 

int main(){
    char a;
    printf(" Enter a character\n");
    scanf("%c",&a);
    check(a);  // function call
}

// function definition to check if alphabet or not
void check( char x){

    if ((x>='a' && x>='z') || (x>='A' && x>='Z'))
    {
        printf(" It is an alphabet \n ");
    }
    else{
        printf(" It is not an alphabet \n ");

    }
    
}