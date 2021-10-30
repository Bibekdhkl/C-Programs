#include <stdio.h>
// Code for calculating area of a circle
float area_of_circle(float radius){
    int pi = 3.14;
    return pi*radius*radius;
}

int main()
{
    float number = 5.5;
    float area = area_of_circle(number);
    printf("For radius of %0.3f, the area is %0.3f",number,area);
}
