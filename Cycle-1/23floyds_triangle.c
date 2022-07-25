//program to print floyd's triangle//
#include<stdio.h>
int main()
{
    int i,j,n,num=1;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d \t",num);
            num++;
        }
        printf("\n\n");
    }
    return 0;
}

/* OUTPUT

Enter the number of rows:
5

1 

2       3 

4       5       6 

7       8       9       10 

11      12      13      14      15 

COMPILATION STEP
gcc floyds.c -o floyds

EXECUTION STEP
./floyds */
