//program to convert celcius to farenheit//
#include <stdio.h>
int main()
{
    float farenheit,celcius;
    printf("Enter the temperature in celcius: ");
    scanf("%f",&celcius);
    farenheit=(celcius*9/5)+32;
    printf("The temperature in farenheit is %f",farenheit);
    return 0;
}


/* OUTPUT
Enter the temperature in celcius: 12
The temperature in farenheit is 53.599998

COMPILATION STEP
gcc celcius.c -o celcius

EXECUTION STEP
./celcius */

