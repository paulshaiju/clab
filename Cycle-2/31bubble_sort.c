//program to perform bubble sort//
#include<stdio.h>
int main()
{
    int a[10],i,j,temp,n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The sorted array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
}

/* OUTPUT
Enter the limit: 4
Enter the elements: 2
3
1
5
The sorted array is :
1 	2 	3 	5 	 

COMPILATION STEP 
gcc sort.c -o sort

EXECUTION STEP
./sort */	

