//program to find factorial of a number//
#include<stdio.h>
int main()
{
    int i,num,fact=1;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is %d",num,fact);
    return 0;
}

/* OUTPUT
Enter the number:5
The factorial of 5 is 120

COMPILATION STEP
gcc fact.c -o fact

EXECUTION STEP
./fact */

