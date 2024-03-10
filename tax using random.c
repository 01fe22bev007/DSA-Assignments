#include<stdio.h>
main()
{
float units_con,total;
printf("enter the units consumed\n");
scanf("%f",&units_con);
if(units_con>=0&&units_con<=100)
{ {total=units_con*1.0;
printf("total bill is %f",total);}}
else if(units_con>=101&&units_con<=200)
{ {total=units_con*1.5;
printf("total bill is %f",total);}}
else if(units_con>=201&&units_con<=450)
{ {total=units_con*2.0;
printf("total bill is %f",total);}}
else if(units_con>450)
{ {total=units_con*3.0;
printf("total bill is %f",total);}}
else if(units_con<0)
{ printf("units is invalid");}
}
