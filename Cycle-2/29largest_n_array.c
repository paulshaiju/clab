//program to find the largest number in the array//
#include<stdio.h>
int main()
{
    int a[10],large,n,i;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    large=a[0];
    for(i=0;i<n;i++)
    {
        if(large<a[i])
        {
            large=a[i];
        }
    }
    printf("The largest number in the array is: %d",large);
    return 0;
}

/* OUTPUT
Enter the limit: 4
Enter the elements:
4
8
5
6
The largest number in the array is: 8 

COMPILATION STEP
gcc largest.c -o largest

EXECUTION STEP
./largest */

