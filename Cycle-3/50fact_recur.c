//program to find the factorial of a number using recursion//
#include<stdio.h>
int fact(int n)
{
    if(n>=1)
    {
        return(n*fact(n-1));
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The factorial of the number is:%d",fact(n));
}

/* OUTPUT

Enter the number: 5
The factorial of the number is:120

COMPILATION STEP
gcc fact_recur.c -o fact_recur

EXECUTION STEP
/.fact_recur */

