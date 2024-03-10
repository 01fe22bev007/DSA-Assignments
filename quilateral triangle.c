#include<stdio.h>
main()
{
int side1,side2,side3;
printf("enter all three sides\n");
scanf("%d%d%d",&side1,&side2,&side3);
if(side1==side2 && side2==side3 && side1==side3)
{printf("it is an equilateral triangle");
}
else
{printf("it is not an equilateral triangle");}
}
