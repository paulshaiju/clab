//program to find the strong number using function//
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
int strong(int n)
{
    int num,digit,sum=0;
    num=n;
    while(num>0)
    {
        digit=num%10;
        sum=sum+fact(digit);
        num=num/10;
    }
    if(n==sum)
    {
        printf("It is a strong number");
    }
    else
    {
        printf("It is not a strong number");
    }
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    strong(n);
}

/* OUTPUT
Enter the number: 145
It is a strong number

COMPILATION STEP
gcc strong.c -o strong

EXECUTION STEP
./strong */
