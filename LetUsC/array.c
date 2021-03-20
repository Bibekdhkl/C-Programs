#include<stdio.h>

int main(){
      int arr[]={9,8,7,6,5,4,3,2,1};
      for(int i=0;i<9;i++){
            printf("arr[i]=%d\t",arr[i]);//compiler internally converts into *(arr+i)
            printf("*(arr+i)=%d\t",*(arr+i));
            printf("*(i+arr)=%d\t",*(i+arr));
            printf("i[arr]=%d\n",i[arr]);
            
      }
      return 0;

}