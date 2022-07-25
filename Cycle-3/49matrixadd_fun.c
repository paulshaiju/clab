//program to add two matrices using function//
#include<stdio.h>
int matrix_read(int a[][2],int m,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
int matrix_display(int a[][2],int m,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d\t\t",a[i][j]);
        }
        printf("\n\n");
    }
}
int matrix_add(int a[][2],int b[][2],int c[][2],int m,int n)
{
    int j;
   for(int i=0;i<n;i++)
    {
        c[i][j]=0;
        for(int j=0;j<m;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
}
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
    printf("Enter the matrix A: \n");
    matrix_read(a,2,2);
    printf("Enter the matrix B: \n");
    matrix_read(b,2,2);
    matrix_add(a,b,c,2,2);
    printf("sum of matrix A and matrix B:\n");
    matrix_display(c,2,2);
}

/* OUTPUT

Enter the matrix A:
1
2
3
4
Enter the matrix B: 
1
2
3
4
sum of matrix A and matrix B:
2		4		

6		8		

COMPILATION STEP
gcc sum_matrix.c -o sum_matrix

EXECUTION STEP
./sum_matrix */































