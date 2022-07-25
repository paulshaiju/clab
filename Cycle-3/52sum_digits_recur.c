//program to find the sum of digits using recursion//
#include<stdio.h>
int sum(int n)
{
    if(n>=1)
    {
        return(n%10+sum(n/10));
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("sum of digits:%d",sum(n));
}

/* OUTPUT
Enter the number: 456
sum of digits:15

COMPILATION STEP
gcc sum.c -o sum

EXECUTION STEP
./sum */
