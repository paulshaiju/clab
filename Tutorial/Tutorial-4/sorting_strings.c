//program to sort set of strings//
#include<stdio.h>
#include<string.h>
int main()
{
    char temp[25],s[25][25];
    int i,j,n;
    printf("How many string are you going to enter?\n");
    scanf("%d",&n);
    printf("Enter the strings:\n");
    for(i=0;i<=n;i++)
    {
        fgets(s[i],25,stdin);
    }
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(strcmp(s[i],s[j])>0)
            {
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
            }
        }
    }
    printf("sorted set of strings:\n");
    for(i=0;i<=n;i++)
    {
        printf("%s",s[i]);
    }
}

/* OUTPUT
How many string are you going to enter?
4
Enter the strings:
Apple 
Orange
Grapes
Mango
sorted set of strings:

Apple 
Grapes
Mango
Orange

COMPILATION STEP
gcc string.c -o string

EXECUTION STEP
./string */

