//program to find the largest of three integers//
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is larger",a);
        }
        else
        {
            printf("%d is larger",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is larger",b);
        }
        else
        {
            printf("%d is larger",c);
        }
    }
    return 0;
}

/* OUTPUT
Enter the value of a: 1
Enter the value of b: 5
Enter the value of c: 7
7 is larger

COMPILATION STEP
gcc largestof3.c -o largestof3

EXECUTION STEP
./largestof3 */



