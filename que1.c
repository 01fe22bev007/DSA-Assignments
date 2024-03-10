#include<stdio.h>
main()
{
int x,y;
printf("enter x and y values\n");
scanf("%d%d",&x,&y);
printf("before swapping\n x=%d\n y=%d\n",x,y);

x=x+y;
y=x-y;
x=x-y;

printf("after swapping\n x=%d\n y=%d\n",x,y);
}

