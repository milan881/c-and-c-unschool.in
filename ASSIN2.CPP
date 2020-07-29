#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,num3,sum;
clrscr();
printf("Enter the three no to add them -->>\n");
scanf("%d%d%d",&num1,&num2,&num3);
sum=num1+num2+num3;
printf("sum of %d+%d+%d=%d",num1,num2,num3,sum);
getch();
}