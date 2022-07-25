//program to merge the contents of two files into a third file//
#include<stdio.h>
int main()
{
	FILE *f1,*f2,*f3;
	char ch;
	f1=fopen("file1.txt","r"); //test.txt should be in the folder
	f2=fopen("file2.txt","r");
	f3=fopen("merge.txt","w");
	while(feof(f1)==0)
	{
		ch=fgetc(f1);
		fputc(ch,f3);
	}
	while(feof(f2)==0)
	{
		ch=fgetc(f2);
		fputc(ch,f3);
	}
	printf("Successfully Merged\n");
	fclose(f1);
	fclose(f2);
	fclose(f3);
	f2=fopen("merge.txt","r");
	while(feof(f3)==0)
		{
			ch=fgetc(f3);
			printf("%c",ch);
		}
	fclose(f3);
}

/* OUTPUT

Successfully Merged
Hello, Welcome to C programming Lab

This is our last program!C is very easy to learn

All the BEST for your University Exams!

Bye.

COMPILATION STEP
gcc fmerge.c -o fmerge

EXECUTION STEP
./fmerge.c */

