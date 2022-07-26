//program create a structure containing the fields:Name, Price, Quantity, and Total amount.//
//Use separate functions to read and print data.//
#include<stdio.h>
#include<string.h>
struct details
{
    char name[10];
    float price;
    int quantity;
    float total;
};
void read()
{
    int i;
    struct details s1[3];
    for(i=0;i<3;i++)
    {
        printf("Enter the name: ");
        scanf("%s",s1[i].name);
        printf("Enter the price: ");
        scanf("%f",&s1[i].price);
        printf("Enter the quanity: ");
        scanf("%d",&s1[i].quantity);
        printf("Enter the total amount: ");
        scanf("%f",&s1[i].total);
    }
}
void print_details()
{
    int i;
    struct details s1[3];
    printf("\n\nNAME\tPRICE\t\tQUANTITY\tTOTAL_AMOUNT\n\n");
    for(i=0;i<3;i++)
    {
        printf("%s\t%f\t%d\t\t%f\n",s1[i].name,s1[i].price,s1[i].quantity,s1[i].total);
    }
}
int main()
{
    printf("DETAILS OF STATIONARY PRODUCTS\n\n");
    read();
    print_details();
}

/* OUTPUT

DETAILS OF STATIONARY PRODUCTS

Enter the name: Pen
Enter the price: 10
Enter the quanity: 20
Enter the total amount: 200
Enter the name: Pencil
Enter the price: 8
Enter the quanity: 15
Enter the total amount: 120    
Enter the name: Eraser
Enter the price: 2
Enter the quanity: 12
Enter the total amount: 24


NAME    PRICE           QUANTITY        TOTAL_AMOUNT

Pen     10.000000       20              200.000000
Pencil  8.000000        15              120.000000
Eraser  2.000000        12              24.000000

COMPILATION STEP
gcc product.c -o product

EXECUTION STEP
./product */


















