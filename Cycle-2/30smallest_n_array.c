//program to find the smallest number in the array//
#include<stdio.h>
int main()
{
    int a[10],small,n,i;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    small=a[0];
    for(i=0;i<n;i++)
    {
        if(small>a[i])
        {
            small=a[i];
        }
    }
    printf("The smallest number in the array is: %d",small);
    return 0;
}

/* OUTPUT
Enter the limit: 4
Enter the elements:
1
6
4
8
The smallest number in the array is: 1 

COMPILATION STEP
gcc smallest.c -o smallest

EXECUTION STEP
./smallest */

