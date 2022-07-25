//program to implement simple calculator using switch case//
#include<stdio.h>
int main()
{
    int a,b,result;
    char op;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter any operator: ");
    scanf(" %c",&op);
    switch (op)
    {
        case'+':
            result=a+b;
            printf("Result: %d",result);
            break;
        case'-':
            result=a-b;
            printf("Result: %d",result);
            break;
        case'*':
            result=a*b;
            printf("Result: %d",result);
            break;
        case'/':
            result=a/b;
            printf("Result: %d",result);
            break;
        case'%':
            result=a%b;
            printf("Result: %d",result);
            break;
        default:
            printf("INVALID OPERATOR");
            break;
    }
    return 0;
}
/* OUTPUT
Enter the value of a: 4
Enter the value of b: 5
Enter any operator: +
Result: 9

Enter the value of a: 5
Enter the value of b: 4
Enter any operator: -
Result: 1

Enter the value of a: 4
Enter the value of b: 5
Enter any operator: *
Result: 20

Enter the value of a: 40
Enter the value of b: 5
Enter any operator: /
Result: 8

Enter the value of a: 5
Enter the value of b: 4
Enter any operator: %
Result: 1

Enter the value of a: 4
Enter the value of b: 5
Enter any operator: _
INVALID OPERATOR 

COMPILATION STEP
gcc calculator.c -o calculator

EXECUTION STEP
./calculator */

