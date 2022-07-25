//program to find the largest of two integers//
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    if(a>b)
    {
    printf("%d is larger",a);
    }
    else
    {
    printf("%d is larger",b);
    }
    return 0;
}

/* OUTPUT
Enter the value of a: 5
Enter the value of b: 6
6 is larger 

COMPILATION STEP
gcc largest.c -o largest

EXECUTION STEP
./largest */


