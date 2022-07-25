//program to find reverse of a number//
#include<stdio.h>
int main()
{
    int num,digit,rev=0;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num>0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    printf("Reverse of the number is: %d",rev);
    return 0;
}
/* OUTPUT
Enter the number:234
Reverse of the number is: 432 

COMPILATION STEP
gcc rev.c -o rev

EXECUTION STEP
./rev */


