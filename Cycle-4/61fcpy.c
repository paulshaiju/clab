//program to copy the content of one file to another file//
#include<stdio.h>
int main()
{
	FILE *f1,*f2;
	char ch;
	f1=fopen("test.txt","r");
	f2=fopen("copy.txt","w");
	while(feof(f1)==0)
	{
		ch=fgetc(f1);
		fputc(ch,f2);
	}
	printf("Successfully Copied\n");
	fclose(f1);
	fclose(f2);
	f2=fopen("copy.txt","r");
	while((ch=getc(f2))!=EOF)
		printf("%c",ch);
	fclose(f2);
}

/* OUTPUT
Successfully Copied
computer science

COMPILATION STEP
gcc fcpy.c -o fcpy

EXECUTION STEP
./fcpy */