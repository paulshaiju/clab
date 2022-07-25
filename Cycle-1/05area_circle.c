//program to find area of the circle//
#include<stdio.h>
int main()
{
    float radius,Area;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    Area=3.14*radius*radius;
    printf("Area of the circle:%f",Area);
    return 0;
}

/*OUTPUT
 Enter the radius: 5
 Area of the circle:78.500000 
 
 COMPILATION STEP
 gcc areaofcircle.c -o areaofcircle
 
 EXECUTION STEP
 ./areaofcircle */

