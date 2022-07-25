//program to find the factorial using function//
#include<stdio.h>
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,fact(n));
}

/* OUTPUT
Enter the number: 5
The factorial of 5 is 120

COMPILATION STEP
gcc fact.c -o fact

EXECUTION STEP
./fact */
