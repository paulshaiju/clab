//program to find the sum of digits//
#include<stdio.h>
int main()
{
    int num,digit,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num>0)
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    printf("sum of digits: %d",sum);
    return 0;
}



/* OUTPUT
Enter the number:456
sum of digits: 15 

COMPILATION STEP
gcc sum2.c -o sum2

EXECUTION STEP
./sum2 */

