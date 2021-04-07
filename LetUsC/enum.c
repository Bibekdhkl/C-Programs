#include<stdio.h>

int main(){
      enum nameDay{//enum is used to create own data type and to define which value it takes
            sun,mon,tue,wed,thu,fri,sat//sun starts from 0 and gradually increases to right
      };
      struct Time{
              enum nameDay t;
              int Day;
              int year;
      };
      struct Time var;
      scanf("%d%d",&var.Day,&var.year);
      var.t=fri;//assigns 5 to var.t as fri lies in fifth position starting 0 from sun
      printf("%d\n%d\n",var.Day,var.year);
      printf("%d\n",var.t);
      return 0;
}