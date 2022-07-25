//program to find the sum of the following series upto N terms//
#include<stdio.h>
int main()
{
    int i,n,f,sum=0;
    printf("Enter the limit: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=i*i+1;
        sum=sum+f;
    }
    printf("sum of the series: %d",sum);
    return 0;
}

/* OUTPUT
Enter the limit: 2
sum of the series: 7 

COMPILATION STEP
gcc sumofseries.c -o sumofseries 

EXECUTION STEP
./sumofseries */

