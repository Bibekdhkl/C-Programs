/*
Function Description

Complete the calculate_the_maximum function in the editor below.

calculate_the_maximum has the following parameters:

int n: the highest number to consider
int k: the result of a comparison must be lower than this number to be considered
Prints

Print the maximum values for the and, or and xor comparisons, each on a separate line.

Input Format

The only line contains 2 space-separated integers, n and k.


Sample Input 0

5 4
Sample Output 0

2
3
3
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int maxA=0,maxO=0,maxX=0;
  for(int i=1;i<n;i++){
      for(int j=i+1;j<=n;j++){
          if((i&j)<k){
              if(maxA<(i&j))
                maxA=(i&j);
          }
          if((i|j)<k){
              if(maxO<(i|j))
                maxO=(i|j);
          }
          if((i^j)<k){
              if(maxX<(i^j))
                maxX=(i^j);
          }
      }
     }
    printf("%d\n%d\n%d\n",maxA,maxO,maxX);
  
  
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
