//Program to print all the prime number from  1 t0 n (n entered by user)
#include <stdio.h>

int main()
{
      int i, j, n;
      printf("Enter the number : ");
      scanf("%d",&n);
      for (i = 1; i <= n; i++)
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
