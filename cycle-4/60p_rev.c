//program to reverse a string using pointers//
#include<stdio.h>
#include<string.h>
void main()
{
	char s[50];
	int len,i;
	printf("\nENTER A STRING: ");
	fgets(s,50,stdin);
	len=strlen(s);
	printf("\nTHE REVERSE OF THE STRING IS:");
	for(i=len;i>=0;i--)
	{
	    printf("%c",*(s+i));
	}
}

/* OUTPUT
ENTER A STRING: BLUE

THE REVERSE OF THE STRING IS:
EULB

COMPILATION STEP
gcc p_rev.c -o p_rev

EXECUTION STEP 
./p_rev */

