#include <stdio.h>

unsigned long long int factorial (unsigned long long int n) {

    if (n == 0)

        return 1;

    else

        return n * factorial (n - 1);

}

int main() 

{

    unsigned long long int n;

    scanf ("%llu", &n);

    printf ("%llu", factorial(n));

    return 0;

}
