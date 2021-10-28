#include <stdio.h>

long int factorial(long int);
long int factorial_tail(long int, long);
long int factorial_loop(long int);

int main() {
  long int num = 10;
  printf("factorial Recursion of %ld: %ld \n", num, factorial(num));
  printf("factorial Recursion tail optimization of %ld: %ld \n", num, factorial_tail(num, 1));
  printf("factorial of Loop %ld: %ld \n", num, factorial_loop(num));
  return 0;
}

long int factorial(long int num) {
  // base case
  if (num == 0)
    return 1;

  // induction hypothesis
  long int smallerOutput = factorial(num-1);

  // induction step
  long int result = smallerOutput * num;

  return result;
}

long int factorial_loop(long int num) {
  long int fact = 1;
  for(size_t i=num; i>=1; i--) {
    fact *= i;
  }
  return fact;
}

long int factorial_tail(long int num, long fact) {
  // base case
  if (num == 0) return fact;

  return factorial_tail(num-1, fact*num);  
}
