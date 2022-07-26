//program to store and print student details using structure//
#include<stdio.h>
struct student
{
    int rno;
    char name[10];
    float mark;
};
int main()
{
    int i;
    struct student s[2];
    for(i=0;i<2;i++)
    {
        printf("Enter the student details:\n");
        printf("ROLLNO: ");
        scanf("%d",&s[i].rno);
        printf("NAME: ");
        scanf("%s",s[i].name);
        printf("MARK: ");
        scanf("%f",&s[i].mark);
    }
    printf("NAME\tROLLNO\tMARK\n");
    for(i=0;i<2;i++)
    {
        printf("%d\t%s\t%f\t\n",s[i].rno,s[i].name,s[i].mark);
    }
}

/* OUTPUT
Enter the student details:
ROLLNO: 1
NAME: ARUN
MARK: 50
Enter the student details:
ROLLNO: 2
NAME: ARJUN
MARK: 50
NAME    ROLLNO  MARK
1       ARUN    50.000000
2       ARJUN   50.000000

COMPILATION STEP
gcc student_struct.c -o student_struct

EXECUTION STEP
/.student_struct */
