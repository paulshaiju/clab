//program to concantenate two strings//
#include<stdio.h>
#include<string.h>
int main()
{
    char string1[100],string2[100];
    printf("Enter the string1: ");
    scanf("%s",string1);
    printf("Enter the string2: ");
    scanf(" %s",string2);
    strcat(string1,string2);
    printf("The string after concantenation: %s",string1);
}

/* OUTPUT
Enter the string1: computer
Enter the string2: science
The string after concantenation: computerscience

COMPILATION STEP
gcc concantenate.c -o concantenate;

EXECUTION STEP
./concantenate */
