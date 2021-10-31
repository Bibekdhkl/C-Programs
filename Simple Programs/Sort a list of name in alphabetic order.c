// Sort a list of name in alphabetic order

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
        void sortname(char[10][80], int);
        char names[10][80], i, n;
        clrscr();
        printf("How many names?");
        scanf("\t\t%d", & n);
        printf("\n\n\t\t Enter %d names below\n", n);
        for (i = 0; i < n; i++)
        {
                scanf("\t\t%s", names[i]);
        }
        sortname(names, n);
        printf("\n\n\t\tsorted names\n");
        for (i = 0; i < n; i++)
        {
                printf("\n\t\t%s\n", names[i]);
        }
        getch();
}
void sortname(char s[10][80], int n)
{
        char temp[80], i, j;
        for (i = 0; i < n - 1; i++) 
        {
                for (j = i + 1; j < n; j++)
                {
                        if (strcmpi(s[i], s[j]) > 0)
                        {
                                strcpy(temp, s[i]);
                                strcpy(s[i], s[j]);
                                strcpy(s[j], temp);
                        }
                }
        }
}

/*
Output:
        How many names ? 3
Enter 3 names below
Sachi
Dhoni
Helly

Sorted names
Dhoni
Helly
Sachi
*/
