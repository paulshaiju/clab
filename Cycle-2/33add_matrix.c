//program to add two matrices//
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],sum[10][10],i,j,r1,c1,r2,c2;
    printf("Enter the number of rows: ");
    scanf("%d",&r1);
    printf("Enter the number of columns: ");
    scanf("%d",&c1);
    printf("Enter the elements in matrix A\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("Enter the element in a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the number of rows: ");
    scanf("%d",&r2);
    printf("Enter the number of columns: ");
    scanf("%d",&c2);
    printf("Enter the elements in matrix B\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("Enter the element in b[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    if(r1==r2&&c1==c2)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                sum[i][j]=a[i][j]+b[i][j];
            }
        }
    }
    printf("The sum of matrix A and matrix B is: \n\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d \t",sum[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}

/* OUTPUT

Enter the number of rows: 3
Enter the number of columns: 3
Enter the elements in matrix A
Enter the element in a[0][0]: 4
Enter the element in a[0][1]: 6
Enter the element in a[0][2]: 5
Enter the element in a[1][0]: 2
Enter the element in a[1][1]: 3
Enter the element in a[1][2]: 1
Enter the element in a[2][0]: 6
Enter the element in a[2][1]: 4
Enter the element in a[2][2]: 5
Enter the number of rows: 3
Enter the number of columns: 3
Enter the elements in matrix B
Enter the element in a[0][0]: 4
Enter the element in a[0][1]: 9
Enter the element in a[0][2]: 7
Enter the element in a[1][0]: 6
Enter the element in a[1][1]: 5
Enter the element in a[1][2]: 9
Enter the element in a[2][0]: 7
Enter the element in a[2][1]: 3
Enter the element in a[2][2]: 5
The sum of matrix A and matrix B is: 

8 	15 	12 	

8 	8 	10 	

13 	7 	10 	

COMPILATION STEP
gcc add.c -o add

EXECUTION STEP
./add */


































