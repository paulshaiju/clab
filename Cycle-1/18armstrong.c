//program to check whether a number is armstrong or not//
#include<stdio.h>
int main()
{
    int n,num,digit,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
        digit=n%10;
        sum=sum+(digit*digit*digit);
        n=n/10;
    }
    if(num==sum)
    {
        printf("It is an armstrong number");
    }
    else
    {
        printf("It is not an armstrong number");
    }
    
}

/* OUTPUT
Enter the number: 153
It is an amstrong number

Enter the number: 145
It is not an amstrong number

COMPILATION STEP
gcc amstrong.c -o amstrong

EXECUTION STEP
./amstrong */
