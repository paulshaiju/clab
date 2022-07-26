//program to find the second largest number in 1D array//
#include<stdio.h>
int main()
{
    int a[10],i,j,temp,n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("Enter the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The second largest number is:%d",a[1]);
}

/* OUTPUT
Enter the limit: 4
Enter the array:
4
10
9
8
The second largest number is:9

COMPILATION STEP
gcc secondlargest.c -o secondlargest

EXECUTION STEP
./secondlargest */
