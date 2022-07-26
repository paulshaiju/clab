//program to read a set of numbers from a file named ‘data.txt’,//
//then write all the 'odd' numbers to a file named ‘odd.txt’ & all//
//'even' numbers to a file named ‘even.txt’//
#include<stdio.h>
int main()
{
	FILE *f1,*f2,*f3;
	int num,i;
	printf("Enter numbers into data.txt file\n\n");
	f1=fopen("data.txt","w");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&num);
		putw(num,f1);
	}
	fclose(f1);
	f1=fopen("data.txt","r");
	f2=fopen("odd.txt","w");
	f3=fopen("even.txt","w");
	while((num=getw(f1))!=EOF)
	{ 
		if(num%2==0)
			putw(num,f3);
		else
			putw(num,f2); 
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	f2=fopen("odd.txt","r");
	f3=fopen("even.txt","r");
	printf("Contents of odd.txt file\n\n");
	while((num=getw(f2))!=EOF)
		printf("%d\n",num);
	printf("\nContents of even.txt file\n\n");
	while((num=getw(f3))!=EOF)
		printf("%d\n",num);
	fclose(f2);
	fclose(f3);
}

/* OUTPUT
Enter numbers into data.txt file

1
2
3
4
5
Contents of odd.txt file

1
3
5

Contents of even.txt file

2
4

COMPILATION STEP
gcc foddeven.c -o foddeven

EXECUTION STEP
./foddeven.c */