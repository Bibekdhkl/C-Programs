//Program to print all the prime number from  1 t0 10
#include <stdio.h>

int main()
{
      int i, j;
      for (i = 1; i <= 10; i++)
      {
            for (j = 2; j < i; j++)
            {
                  if (i % j == 0)
                  {
                        break;
                  }
            }
            if (i == j)
            {
                  printf("%d\t", i);
            }
      }
      return 0;
}