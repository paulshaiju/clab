//program to find the sum of n natural numbers using while loop//
#include<stdio.h>
int main()
{
    int n,sum=0,i=0;
    printf("Enter the numnbers of terms to be added: ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("sum of %d terms: %d",n,sum);
    return 0;
}

/* OUTPUT
Enter the numnbers of terms to be added: 5
sum of 5 terms: 15 

COMPILATION STEP
gcc sum1.c -o sum1

EXECUTION STEP
./sum1 */

