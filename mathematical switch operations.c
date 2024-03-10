#include<stdio.h>
main()
{
int ch;
float n1,n2,sum,sub,mul,div;
printf("enter two nos. and choice\n");
scanf("%f%f%d",&n1,&n2,&ch);

switch(ch)
{
case 1: sum=n1+n2;
printf("addition=%f",sum);
break;

case 2: sub=n1-n2;
printf("substraction=%f",sub);
break;

case 3: mul=n1*n2;
printf("multiplication=%f",mul);
break;

case 4: div=n1/n2;
printf("division=%",div);
break;

default: printf("invalid choice");
}}
