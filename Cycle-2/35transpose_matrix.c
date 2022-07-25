//program to find transpose of a matrix//
#include<stdio.h>
int main()
{
    int a[10][10],trans[10][10],i,j,m,n;
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    printf("Enter the elements in the matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the number in a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix A is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n\n");
    }
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            trans[j][i]=a[i][j];
        }
    }
    printf("The transpose of the matrix A is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d \t",trans[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}

/* OUTPUT
Enter the number of rows: 2
Enter the number of columns: 2
Enter the elements in the matrix:
Enter the number in a[0][0]: 1
Enter the number in a[0][1]: 2
Enter the number in a[1][0]: 4
Enter the number in a[1][1]: 5
The matrix A is:
1 	2 	

4 	5 	

The transpose of the matrix A is:
1 	4 	

2 	5 	

COMPILATION STEP
gcc trans.c -o trans

EXECUTION STEP
./trans */
    
