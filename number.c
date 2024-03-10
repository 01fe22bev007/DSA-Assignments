#include<stdio.h>
main()
{
float n1,n2;
int ch;
printf("enter two numbers and choice\n");
scanf("%f%f%d",&n1,&n2,&ch);

if(ch==1)
{
printf("addition=%f",n1+n2);
}

else if(ch==2)
{
printf("substraction=%f",n1-n2);}

else if(ch==3)
{
printf("multiplication=%f",n1*n2);}

else if(ch==4)
{
printf("division=%f",n1/n2);}

else
{printf("invalid choice");
}

}
