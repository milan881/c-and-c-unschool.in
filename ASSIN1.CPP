#include<stdio.h>
#include<conio.h>
int main()
{
int num1,num2,add,sub,mult,div,mod;

printf("ENTER THE FIRST NO-->>");
scanf("%d",&num1);
printf("\nENTER THE SECOND NO-->>");
scanf("%d",&num2);
add=num1+num2;
sub=num1-num2;
mult=num1*num2;
div=num1/num2;
mod=num1%num2;
printf("********************************************");
printf("\nAddition of %d and %d is -->>%d\n",num1,num2,add);
printf("\nSubtraction of %d and %d is -->>%d\n",num1,num2,sub);
printf("\nMultiplication of %d and %d is -->>%d\n",num1,num2,mult);
printf("\nDivision of %d and %d is -->>%d\n",num1,num2,div);
printf("\nModulas of %d and %d is -->>%d\n",num1,num2,mod);
getch();
}
