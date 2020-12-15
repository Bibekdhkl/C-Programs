#include<stdio.h>

int main(){
      int units;
      float amnt;
      printf("Enter the units consumed: ");
      scanf("%d",&units);
      if(units<=20){
            amnt=90;
      }
      else if(units>20 && units <=100){
            amnt=90+(units*10.5);
      }
      else if(units>100 && units <=200){
            amnt=90+(80*10.5)+(units-100)*15.5;
      }
      else if(units>200 && units <=450){
            amnt=90+(80*10.5)+(100*15.5)+(units-250)*18;
      }
      else{
            amnt=90+(80*10.5)+(100*15.5)+(250*18)+(units-450)*22.5;
      }
      amnt+=175;
      amnt+=(0.0465*amnt);
      printf("The total amount to be paid is: %f",amnt);
      return 0;
}