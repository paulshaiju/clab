//program to find the prime numbers using function//
#include<stdio.h>
void prime(int n)
{
    int i,flag=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is not a prime number");
    }
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    prime(n);
}

/* OUTPUT
Enter the number: 5
It is a prime number

Enter the number: 8
It is not a prime number

COMPILATION STEP
gcc prime.c -o prime

EXECUTION STEP
./prime */
