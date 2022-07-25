//program to find the sum of two integers//
#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    sum=a+b;
    printf("The sum of %d and %d is %d",a,b,sum);
    return 0;
}

/* OUTPUT
Enter the value of a: 5
Enter the value of b: 4
The sum of 5 and 4 is 9 

COMPILATION STEP
gcc sum.c -o sum

EXECUTION STEP
./sum */


