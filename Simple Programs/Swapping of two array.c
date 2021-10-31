/*Swapping of two arrays*/

#include<stdio.h>
void main()
{
  int a[5],b[5],c[5],i;
  printf("Enter First array->");
  for(i=0;i<5;i++)
  scanf("%d",&a[i]);
  printf("\nEnter Second array->");
  for(i=0;i<5;i++)
            scanf("%d",&b[i]);
  printf("\nArrays before swapping");
  printf("\nFirst array->");
  for(i=0;i<5;i++)
  {
            printf("%d",a[i]);
  }
  printf("\nSecond array->");
  for(i=0;i<5;i++)
  {
            printf("%d",b[i]);
  }
  for(i=0;i<5;i++)
  {
            //write any swapping technique
            c[i]=a[i];
            a[i]=b[i];
            b[i]=c[i];
  }
  printf("\n\nArrays after swapping");
  printf("\nFirst array->");
  for(i=0;i<5;i++)
  {
            printf("%d",a[i]);
  }
  printf("\nSecond array->");
  for(i=0;i<5;i++)
  {
            printf("%d",b[i]);
  }
}

/*
Output:
 Enter First array->
 1 2 3 4 5
 Enter Second array->
 6 7 8 9 10

 Arrays before swapping
 First array-> 1 2 3 4 5 
 Second array-> 6 7 8 9 10

 Arrays after swapping
 First array-> 6 7 8 9 10
 Second array-> 1 2 3 4 5
 */
