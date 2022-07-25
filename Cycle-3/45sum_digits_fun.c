//program to find the sum of digits of a number using function//
#include<stdio.h>
int sumdigit(int n)
{
    int i,digit,sum=0;
    while(n>0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("sum of digit: %d",sumdigit(n));
}

/* OUTPUT
Enter the number: 456
sum of digit: 15

COMPILATION STEP
gcc sumdigit.c -o sumdigit

EXECUTION STEP
./sumdigit */
