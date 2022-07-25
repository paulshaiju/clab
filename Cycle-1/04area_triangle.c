//program to find the area of a triangle//
#include<stdio.h>
int main()
{
    float base,height,Area;
    printf("Enter the value of base: ");
    scanf("%f",&base);
    printf("Enter the value of height: ");
    scanf("%f",&height);
    Area=0.5*base*height;
    printf("Area of the triangle: %f",Area);
    return 0;
}
/* OUTPUT
Enter the value of base: 4
Enter the value of height: 6
Area of the triangle: 12.000000

COMPILATION STEP
gcc areaoftriangle.c -o areaoftriangle 

EXECUTION STEP
./areaoftriangle */


