//finding volume of sphere
#include <stdio.h>


int main()
{
    float r, Vol;
    printf("Enter radius of sphere");
    scanf("%f", &r);
    Vol = (4.0 / 3) * (22.0 / 7) * r * r * r;
    printf("Volume of sphere is: %.2f\n", Vol);
    return 0;
}