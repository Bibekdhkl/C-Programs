#include<stdio.h>
#include<stdarg.h>

int maxm(int,...);//the ellipses(...) indicated that the number of arguments affter the first argument would be variable

int main(){
      int result;
      result=maxm(5,2,4,2,8,7);//here 5 is passed as total number of values to be compared
      printf("Maxm is: %d\n",result);
      result=maxm(2,11,10);
      printf("Maxm is: %d",result);
      return 0;
}

int maxm(int num,...){//num takes total number to be compared
      int max,i,next;
      va_list ptr;
      va_start(ptr,num);//It initialize a pointer to the beginning of the list of optional argv
      max=va_arg(ptr,int);//It is used to advance the pointer to the next argument
      for(i=1;i<num;i++){
            next=va_arg(ptr,int);//It assign the integer pointer to by ptr to next
            (next>max)?(max=num):(max=max);
      }
      return max;
}