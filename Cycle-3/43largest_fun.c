//program to find the largtest of two numbers using function//
#include<stdio.h>
void largest(int x , int y)
{
    if(x>y)
    {
        printf("The largest number is %d",x);
    }
    else
    {
        printf("The largest number is %d",y);
    }
}
int main()
{
    int a,b;
    printf("Enter the values of a and b:\n");
    scanf("%d %d",&a,&b);
    largest(a,b);
}

/* OUTPUT
Enter the values of a and b:
4
6
The largest number is 6

COMPILATION STEP
gcc largest.c -o largest

EXECUTION STEP
./largest */
