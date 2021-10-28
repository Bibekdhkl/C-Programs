#include <stdio.h>

int sum(int num) {
  // condition for programming
  if (num <= 0) return -1;

  // base case
  if (num == 1) return 1;

  // induction hypothesis
  int smallerOutput = sum(num-1);

  // induction step
  int result = smallerOutput + num;

  return result;
}

int main() {
  int num = 10;
  printf("Sum of %d natural number: %d\n", num, sum(num));
  return 0;
}
