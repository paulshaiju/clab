//program to find the fibonacci series using recursion function//
#include<stdio.h>
int fibo(int n)
{
    if (n<=1)
    {
        return n;
    }
    else
    {
        return(fibo(n-1)+fibo(n-2));
    }
}
int main()
{
    int n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t\t",fibo(i));
    }
}

/* OUTPUT

Enter the limit: 5
0		1		1		2		3		

COMPILATION STEP
gcc fibo.c -o fibo

EXECUTION STEP
/.fibo */

