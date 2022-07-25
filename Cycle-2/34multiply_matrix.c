//program to multiply two matrices//
#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],i,j,k,r1,c1,r2,c2;
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
    if(r2==c1)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                for(k=0;k<r2;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
    }
    printf("The multiplication of two matrices is: \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
           printf("%d \t",c[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}

/* OUTPUT
Enter the number of rows: 2
Enter the number of columns: 2
Enter the elements in matrix A
Enter the element in a[0][0]: 1
Enter the element in a[0][1]: 2
Enter the element in a[1][0]: 4
Enter the element in a[1][1]: 5
Enter the number of rows: 2
Enter the number of columns: 2
Enter the elements in matrix B
Enter the element in b[0][0]: 2
Enter the element in b[0][1]: 6
Enter the element in b[1][0]: 4
Enter the element in b[1][1]: 5
The multiplication of two matrices is: 
10      16 

28      49

COMPILATION STEP
gcc multi.c -o multi

EXECUTION STEP
./multi */
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
