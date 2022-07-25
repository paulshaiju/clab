//program to fibonacci series up to the given limit//
#include<stdio.h>
int main()
{
    int n,a=0,b=1,i,c;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("%d \t %d \t",a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",c);
    }
    return 0;
}

/* OUTPUT
Enter the limit:5
0 	 1 	1	2	3 

COMPILATION STEP
gcc fibo.c -o fibo

EXECUTION STEP
./fibo */

