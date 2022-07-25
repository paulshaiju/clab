//program to check prime number or not//
#include<stdio.h>
int main()
{
    int y;
    printf("Enter the number: ");
    scanf("%d",&y);
    if (((y % 4 == 0) && (y % 100!= 0)) || (y%400 == 0))
      printf("%d is a leap year", y);
   else
      printf("%d is not a leap year", y);
    return 0;
}

/* OUTPUT
Enter the number: 1700
1700 is not a leap year

Enter the number: 2020
2020 is a leap year

COMPILATION STEP
gcc leapyear.c -o leapyear

EXECUTION STEP
./leapyear */

