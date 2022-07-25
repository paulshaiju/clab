//program to check odd or even//
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d is an even number",num);
    }
    else
    {
        printf("%d is a odd number",num);
    }
    return 0;
}

/* OUTPUT

Enter the number: 2
2 is an even number 

Enter the number: 5
5 is a odd number   

COMPILATION STEP
gcc oddoreven.c -o oddoreven

EXECUTION STEP
./oddoreven */


