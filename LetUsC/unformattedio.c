#include <stdio.h>

void main()
{
      printf("This is examples for unformatted I/O functions\n");
      int n;
      char str[20];
      printf("Enter your choice of unformatted i/o functions:");
      // scanf("%[^\n]%*c", &str);
      fgets(str, 20, stdin);
      // scanf("%d", &n);
      // switch (n)
      // {
      // case 1:
      //       getchar();
      //       break;
      // case 2:
      //       getchar();
      //       break;
      // case 3:
      //       // scanf("%[^\n]%*c", &str);
      //       break;
      // case 4:
      //       scanf("%s", str);
      //       break;
      // case 5:
      //       fgets(str, 20, stdin); 
      //       break;
      // default:
      //       printf("Enter right value by seeing the conditions in switch case");
      //       break;
      // }
      printf("The value entered is:%s\n", str);       
      // printf("End of switch case");
      // getchar();
}