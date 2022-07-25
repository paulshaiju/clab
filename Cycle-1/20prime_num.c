//program to check prime number or not//
#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
     if(n%i==0)
     {
         flag=1;
         break;
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
    return 0;
}

/* OUTPUT
Enter the number: 5
It is a prime number

Enter the number: 10
It is not a prime number

COMPILATION STEP
gcc prime.c -o prime

EXECUTION STEP
./prime */


