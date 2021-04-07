#include<stdio.h>

int main(){
      float ans;
      ans=22/7;//integer upon integer yields integer ;)
      printf("\n%f\n",ans);//without typecasting quotient is truncated i.e. shortened
      ans=(float)22/7;//typecasting can be done like this
      //Also without doing typecasting we can make it work by making a num or den as float
      printf("%.19f\n",ans);
      return 0;
}