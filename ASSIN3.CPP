//Assignment: Nested if-else
#include<stdio.h>
#include<conio.h>
void main()
{
float per;
printf("INPUT PERCENTAGE OF THE STUDENT-->>");
scanf("%f",&per);
if(per>=80)
printf(" A GRADE");
else if((per<=80) && (per>=70))
printf("B GRADE");
else if((per< 70) && (per>=60))
printf("C GRADE");
else if((per<60) && (per>=45))
printf("D GRADE");
else if(per<45)
printf("FAIL");
getch();
}
