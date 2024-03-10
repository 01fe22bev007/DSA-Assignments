#include<stdio.h>
main()
{
float p_amt,total;
printf("enter the purchase amount\n");
scanf("%f",&p_amt);

if(p_amt>=1&&p_amt<=5000)
{ {total=p_amt;
printf("total bill is %f",total);}}

else if(p_amt>=5001&&p_amt<=2500)
{ {total=p_amt-(p_amt*0.05);
printf("total bill is %f",total);}}

else if(p_amt>=25001&&p_amt<=500000)
{ {total=p_amt-(p_amt*0.15);
printf("total bill is %f",total);}}

else if(p_amt>50000)
{ {total=p_amt-(p_amt*0.17);
printf("total bill is %f",total);}}
}
