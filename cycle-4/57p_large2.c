//program to find the largest of two numbers using pointers//
#include<stdio.h>
void largest(int *x, int *y)
{
    if(*x>*y)
    {
        printf("The largest number is %d",*x);
    }
    else
    {
        printf("The largest number is %d",*y);
    }
}
int main()
{
    int a,b;
    printf("Enter the values of a and b:\n");
    scanf("%d %d",&a,&b);
    largest(&a,&b);
}

/* OUTPUT
Enter the values of a and b:
5
4
The largest number is 5

COMPILATION STEP
gcc p_large2.c -o p_large2

EXECUTION STEP
./p_large2 */
