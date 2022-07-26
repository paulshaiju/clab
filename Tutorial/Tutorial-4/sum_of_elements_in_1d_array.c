//program to find the sum of elements of 1D array//
#include<stdio.h>
int main()
{
    int a[10],i,n,sum=0;
    printf("Enter the limit of the array: ");
    scanf("%d",&n);
    printf("Enter the element of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum of elements in 1D array:%d",sum);
}

/* OUTPUT
Enter the limit of the array: 3
Enter the element of the array:
1
2
1
sum of elements in 1D array:4

COMPILATION STEP
gcc sum1.c -o sum1

EXECUTION STEP
./sum1 */
