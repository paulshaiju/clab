//program to check strong number or not//
#include<stdio.h>
int main()
{
    int num,num1,fact,i,sum=0,digit;
    printf("Enter the number: ");
    scanf("%d",&num);
    num1=num;
    while(num>0)
    {
        digit=num%10;
        fact=1;
        for(i=1;i<=digit;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;
    }
    if(num1==sum)
    {
        printf("It is a strong number");
    }
    else
    {
        printf("It is not a strong number");
    }
    return 0;
}

/* OUTPUT

Enter the number: 145
It is a strong number

Enter the number: 133
It is not a strong number

COMPILATION STEP
gcc strong.c -o strong

EXECUTION STEP
./strong */
