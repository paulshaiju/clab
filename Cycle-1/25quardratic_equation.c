//program to check strong number or not//
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,r1,r2,d,e;
    printf("Enter the coefficient of x^2,x and constant terms\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
        printf("It is not a quardratic equation");
    }
    else
    {
        d=(b*b)-(4*a*c);
        if(d<0)
        {
            float real,image;
            real=-b/(2*a);
            image=sqrt(-d)/(2*a);
            printf("Roots are %f+%fi and %f-%fi \n",real,image,real,image);
        }
        else if(d==0)
        {
            e=-b/(2*a);
            printf("The equal roots of the quardratic equation are %f \n",e);
        }
        else
        {
            d=(b*b)-(4*a*c);
            printf("There are 2 roots and they are: \n");
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
            printf("%f %f",r1,r2);
        }
    }
}

/* OUTPUT

Enter the coefficient of x^2,x and constant terms
2
-1
4
Roots are 0.250000+1.391941i and 0.250000-1.391941i 

Enter the coefficient of x^2,x and constant terms
4
8
4
The equal roots of the quardratic equation are -1.000000 

Enter the coefficient of x^2,x and constant terms
1
5
4
There are 2 roots and they are: 
-1.000000 -4.000000

Enter the coefficient of x^2,x and constant terms
0
1
2
It is not a quardratic equation

COMPILATION STEP
gcc quar.c -o quar -lm

EXECUTION STEP
./quar */

