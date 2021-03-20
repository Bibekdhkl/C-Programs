#include<stdio.h>

void main(){
      int num[4][2]={
                        {1, 2},
                        {3,4},
                        {5,6},
                        {7,8}
                  };
      int arr[][2]={11,22,33,44,55,66,77,88};//row is optional but column is compulsary
      for(int i=0;i<4;i++){
            printf("%d | %d\n",num[i][0],num[i][1]);
            printf("-------\n");
      }
      for(int i=0;i<4;i++){
            printf("%d | %d\n",arr[i][0],arr[i][1]);
            printf("-------\n");
      }
      printf("______________________\n");
      for(int i=0;i<4;i++){
            printf("The address of %dth 1D-array is: %ld\n",i,arr[i]);
            //It means that by arr[i] the compiler tells that arr contains 4 1D array each with 2 integers 
      }
      printf("Accessing 2D array by using pointers\n");
      for(int i=0;i<4;i++){
            for(int j=0;j<2;j++){
                  printf("%d |",*(arr[i]+j));
                  //since we know arr[i]==*(arr+i)
                  
            }
            printf("\n-------\n");
      }
}