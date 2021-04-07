#include<stdio.h>

int main(){
      unsigned char b = 0x32;// Hex 0x32 = 00110010 in Binary
      
      b = b ^ 0x0C;//^ = XOR operator
      printf("\n%09x",b);//09 means that that the printed number will occupy total of 9 sp

      b = b ^ 0x0c;
      printf("\n%02x\n",b);


      return 0;
}