//program to display 2-D matrix//
#include<stdio.h>
int main()
{
    int a[3][4],i,j;
    printf("Enter the elements in the matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter the number in a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
}

/* OUTPUT

Enter the elements in the matrix:
Enter the number in a[0][0]: 4
Enter the number in a[0][1]: 6
Enter the number in a[0][2]: 1
Enter the number in a[0][3]: 3
Enter the number in a[1][0]: 5
Enter the number in a[1][1]: 1
Enter the number in a[1][2]: 9
Enter the number in a[1][3]: 8
Enter the number in a[2][0]: 7
Enter the number in a[2][1]: 8
Enter the number in a[2][2]: 5
Enter the number in a[2][3]: 4
4 	6 	1 	3 	
5 	1 	9 	8 	
7 	8 	5 	4 	

COMPILATION STEP
gcc matrix.c -o matrix

EXECUTION STEP
./matrix */
