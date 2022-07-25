//program to count the number of vowels in a string//
#include<stdio.h>
int main()
{
    char s[100];
    int i,count=0;
    printf("Enter the string:\n");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            count++;
        }
    }
    printf("The number of vowels: %d",count);
}


/* OUTPUT
Enter the string:
computerscience
The number of vowels: 6

COMPILATION STEP
gcc string.c -o string

EXECUTION STEP
./string */

