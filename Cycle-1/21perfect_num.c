//program to check perfect number//
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
     if(n%i==0)
     sum=sum+i;
    }
    if(sum==n)
    {
        printf("It is a perfect number");
    }
    else
    {
        printf("It is not a perfect number");
    }
    return 0;
}

/* OUTPUT

Enter the number: 6
It is a perfect number

Enter the number: 8
It is not a perfect number

COMPILATION STEP
gcc perfect.c -o perfect

EXECUTION STEP
./perfect */


