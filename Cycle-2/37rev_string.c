//program to find the reverse of the string using strlen()//
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,length;
    printf("Enter the string:\n");
    scanf("%s",a);
    length = strlen(a);
    printf("\nReverse of the string is:\n");
    for(i=length-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
}


/* OUTPUT 
Enter the string:
COMPUTERSCIENCE

Reverse of the string is:
ECNEICSRETUPMOC

COMPILATION STEP
gcc rev.c -o rev

EXECUTION STEP
./rev */


