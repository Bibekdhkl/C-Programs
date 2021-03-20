#include<stdio.h>

struct Person{
      char name[20];
      int rollno;
};

struct dob{
      int date;
      char sex;
      float wei;
      struct Person p;
};

void main(){
      struct dob d1={2057,"ram",6};
      struct dob d2,d3;
      d3=d1;//copying all structure elements at one go from d1 to d3 unlike arrays
      printf("The details are:\n");
      printf("%d\n%s\n%d\n",d1.date,d1.p.name,d1.p.rollno);
      printf("\n\n%d\n%s\n%d\n",d2.date,d2.p.name,d2.p.rollno);
      printf("\n\n%d\n%s\n%d\n",d3.date,d3.p.name,d3.p.rollno);
      printf("\n%u\n%u\n%u\n",&d2.date,&d2.sex,&d2.wei);
      /* IF you are on VSCODE-Here the memory gap between char and float is 4 which means there's three extra extra bytes stored which is because Visual Studio os a 32 bit copiler targeted to generate code for a 32-bit mircroprocessor. The architecture of this mircroprocessor is such that it is able to fetch the data that is present at an address. Hence the visual Stuio Compiler aligns every element of a structure at an address that is multiple of four. That's the reason why there were three holes created between the ckm/.ncxzar and the float */
}