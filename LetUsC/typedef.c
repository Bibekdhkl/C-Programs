#include<stdio.h>
// #include<types.h>

int main(){
      typedef double NEW;//typedef gives other name to a datatype
      //Here, NEW=double
      // typedef _int64_t LONG;

      NEW num;

      typedef struct Person{
            char name[20];
            NEW phonenum;
      }VAL;//Here, struct Person = VAL;
      VAL var1;//Instead of writing struct Person var1 we are writing this which increases readibility
      fgets(var1.name,20,stdin);
      // fflush(stdin);
      num =12345678901234567;
      scanf("%lf",&var1.phonenum);
      printf("%s%0.0lf\n%0.0lf",var1.name,var1.phonenum,num);
      return 0;

}