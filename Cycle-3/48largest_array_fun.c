//program to find the largest number in the array//
#include<stdio.h>
void read_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void large(int a[], int n)
{
    int i,large;
    large=a[0];
    for(i=0;i<n;i++)
    {
        if(large<a[i])
        {
            large=a[i];
        }
    }
    printf("largest number in the array is:%d",large);
}
int main()
{
    int a[10],n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("Enter the array:\n");
    read_array(a,n);
    large(a,n);
}

/* OUTPUT
Enter the limit: 5
Enter the array:
9
4
3
1
10
largest number in the array is:10

COMPILATION STEP
gcc large.c -o large

EXECUTION STEP
/.large.c */

