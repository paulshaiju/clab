//program to find the largest of n numbers using pointers//
#include<stdio.h>
int main()
{
    int a[10],large,n,i,*ptr;
    printf("Enter the limit: ");
    scanf("%d",&n);
    ptr=a;
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    large=*ptr;
    for(i=0;i<n;i++)
    {
        if(large<*(ptr+i))
        {
            large=*(ptr+i);
        }
    }
    printf("The largest number in the array is: %d",large);
    return 0;
}

/* OUTPUT
Enter the limit: 3
Enter the elements:
4
8
6
The largest number in the array is: 8

COMPILATION STEP
gcc p_largen.c -o p_largen

EXECUTION STEP
p_largen.c */
