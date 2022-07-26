//program to copy string without library function//
#include<stdio.h>
int main()
{
    char string1[]="computerscience";
    char string2[100];
    int i;
    for(i=0;string1[i]!='\0';i++)
    {
        string2[i]=string1[i];
    }
    printf("string2:%s",string2);
}

/* OUTPUT
string2:computerscience

COMPILATION STEP
gcc string.c -o string

EXECUTION STEP
./string */
