#include<stdio.h>
main()
{
int m;
printf("enter the marks\n");
scanf("%d",&m);
if(m>=0&&m<=39)
printf("Fail\n");
else if(m>=40&&m<=59)
printf("Second class\n");
else if(m>=60&&m<=79)
printf("First class\n");
else if(m>=80&&m<=100)
printf("Distinction\n");
else
printf("Invalid marks\n");
}
