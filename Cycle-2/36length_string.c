//program to find the length of the string without using strlen()//
#include<stdio.h>
int main()
{
    int i;
    char a[10]={'B','L','U','E','\0'};
    for(i=0;a[i]!='\0';i++);
    printf("The length of the string is: %d",i);
    return 0;
}


/* OUTPUT

The length of the string is: 4

COMPILATION STEP
gcc str.c -o str

EXECUTION STEP
./str */
