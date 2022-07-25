#include<stdio.h>
#include<math.h>
int main()
{
    int base,exponent,result;
    printf("Enter the base: ");
    scanf("%d",&base);
    printf("Enter the exponent: ");
    scanf("%d",&exponent);
    result=pow(base,exponent);
    printf("RESULT: %d",result);
    return 0;
}

/* OUTPUT
Enter the base: 2
Enter the exponent: 3
RESULT: 8  

COMPILATION STEP
gcc power.c -o power -lm

EXECUTION STEP
./power */


