//program to swap two numbers//
#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Before swapping a=%d and b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping a=%d and b=%d",a,b);
    return 0;
}

/*OUTPUT
Enter the value of a: 4
Enter the value of b: 5
Before swapping a=4 and b=5
After swapping a=5 and b=4

COMPILATION STEP 
gcc swap.c -o swap

EXECUTION STEP
./swap */


