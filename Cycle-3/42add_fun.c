//program to add two numbers using function//
#include<stdio.h>
int add(int a , int b)
{
    return(a+b);
}
int main()
{
    int a,b;
    printf("Enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("sum of the numbers: %d",add(a,b));
}
/* OUTPUT
Enter the value of a and b:
4
5
sum of the numbers: 9

COMPILATION STEP
gcc addfun.c -o addfun

EXECUTION STEP
./addfun */
