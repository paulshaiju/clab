//program to check palindrome or not//
#include<stdio.h>
int main()
{
    int num,num1,digit,rev=0;
    printf("Enter the number:");
    scanf("%d",&num);
    num1=num;
    while(num>0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    if(rev==num1)
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("It is not a palindrome");
    }
    return 0;
}

/* OUTPUT
Enter the number:454
It is a palindrome

Enter the number:456
It is not a palindrome 

COMPILATION STEP
gcc palindrome.c -o palindrome

EXECUTION STEP
./palindrome */

