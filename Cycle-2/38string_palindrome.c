//program to check whether a given string is palindrome or not//
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,length,flag=0;
    printf("Enter the string:\n");
    scanf("%s",s);
    length=strlen(s);
    for(i=0;i<length;i++)
    {
        if(s[i]!=s[length-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("It is not a palindrome");
    }
}


/* OUTPUT
Enter the string:
malayalam
It is a palindrome

Enter the string:
computerscience
It is not a palindrome

COMPILATION STEP
gcc palindrome.c -o palindrome

EXECUTION STEP
./palindrome */
