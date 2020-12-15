    //print the total number of palindrome from 1 to 500
    #include <stdio.h>
    
    int main()
    {
        int i,rem,reverse,j;
        for(i=1;i<=500;i++){
            j=i;
            reverse=0;
            while(j != 0){
                rem=j%10;
                reverse = reverse *10+rem;
                j =j/10;
            }
            if(reverse==i){
                printf("%d\t",i);
            }
        }
        return 0;
    }
