#include<stdio.h>
int Addition(int A, int B);
main()
{
int A,B,sum;
printf("enter two numbers\n");
scanf("%d%d",&A,&B);

sum=Addition(A,B);
printf("Sum of two numbers is %d",sum);
}
int Addition(int A,int B)
{
    int sum;
    sum=A+B;
    return sum;
}
