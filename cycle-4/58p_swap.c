//program to swap two numbers using pointers//
//(use call by address/reference/pointers parameter passing method)//
#include<stdio.h>
void swap(int *a,int *b)
{
    int *t;
    *t=*a;
    *a=*b;
    *b=*t;
}
int main()
{
    int a,b;
    printf("Enter the values of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d and b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping a=%d and b=%d\n",a,b);
}
/* OUTPUT
Enter the values of a and b:
2
3
Before swapping a=2 and b=3
After swapping a=3 and b=2

COMPILATION STEP
gcc p_swap.c -o p_swap

EXECUTION STEP
./p_swap.c */
