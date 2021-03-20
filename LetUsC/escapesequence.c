#include<stdio.h>

void main(){
      /*Most of the escape sequence are self explanatory but some of them are confusing when seen for the fist time*/
      printf("\"My\tName\tis\tBibek\\Dhakal\tand\'IamlearningCProgramming\n");
      printf("\"My\tName\tis\tBibek\\Dhakal\tand\'I\bam\blearning\bCProgramming\b\'\"\n");//\b=backspace
      printf("\"My\tName\tis\tBibek\\Dhakal\tand\'IamlearningCProgramming\'\"\n");
      printf("\"My\tName\tis\tBibek\\Dhakal\tand\'I\ram\rlearning\rCProgramming\'\"\n");//\r=carriage return
      //It takes cursor to the beginning of the line in which it is currently placed
      printf("\"My\tName\tis\tBibek\\Dhakal\tand\'I\fam\flearning\fCProgramming\'\"\n");//\f=formfeed
      //It breaks the line and indents the cursor from the line it is breaked
      printf("\"My\tName\tis\tBibek\\Dhakal\tand\'IamlearningC\aProgramming\'\"\n");//\a=alert
}