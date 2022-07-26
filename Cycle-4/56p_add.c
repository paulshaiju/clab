//program to find the sum of all elements in an array using pointers//
#include<stdio.h>
int main()
{
    int a[5],*p,i,sum=0;
    printf("Enter the elements of a:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    p=a;
    for(i=0;i<5;i++)
    {
        sum=sum+*p;
        p++;
    }
    printf("sum of elements: %d",sum);
}

/* OUTPUT
Enter the elements of a:
4
5
3
2
6
sum of elements: 20

COMPILATION STEP
gcc point_add.c -o point_add

EXECUTION STEP
./point_add */

