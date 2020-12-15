//Print the value of term as requested by the user from the fibonacci series
#include <stdio.h>

int main()
{
    int a,b,term,c,i;
    a=0;
    b=1;
    printf("Enter the term you want to print ");
    scanf("%d",&term);
    if(term==1){
        printf("The first term is: %d",a);
    }
    else if(term==2){
        printf("The second term is: %d",b);
    }
    else{
        for(i=3;i<=term;i++){
            c=a+b;
            a=b;
            b=c;
        }
        printf("The value in required term is: %d",c);
    }
    return 0;
    
    
}
