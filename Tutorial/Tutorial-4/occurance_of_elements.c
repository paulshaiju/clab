//program to find the occurance of element in the array//
#include<stdio.h>
int main()
{
    int a[10],b,i,n,count=0;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to find the occurance: ");
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(b==a[i])
        {
            count++;
        }
    }
    printf("The occurance of %d is: %d",b,count);
}

/* OUTPUT
Enter the limit: 5
Enter the elements:
1
6
4
1
1
Enter the element to find the occurance: 1
The occurance of 1 is: 3

COMPILATION STEP
gcc occurance.c -o occurance

EXECUTION STEP
./occurance */
