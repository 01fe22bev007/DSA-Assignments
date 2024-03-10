#include<stdio.h>
main()
{
float n1,n2;
char ch;
printf("enter two numbers\n");
scanf("%f%f",&n1,&n2);

fflush(stdin);
printf("enter your choice\n");
scanf("%c",&ch);

if(ch=='+')
{
printf("addition=%f",n1+n2);
}

else if(ch=='-')
{
printf("substraction=%f",n1-n2);}

else if(ch=='*')
{
printf("multiplication=%f",n1*n2);}

else if(ch=='/')
{
printf("division=%f",n1/n2);}

else
{printf("invalid choice");
}

}
