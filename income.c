#include<stdio.h>
main()
{float salary,tax;
printf("enter your salary amount\n");
scanf("%f",&salary);

if(salary>=1 && salary<=100000)
{tax=salary*0.02;
printf("%f is the tax to be paid",tax);}

else if(salary>=100001 && salary<=250000)
{tax=salary*0.05;
printf("%f is the tax to be paid",tax);
}

else if(salary>=250001 && salary<=1000000)
{tax=salary*0.1;
printf("%f is the tax to be paid",tax);
}

else if(salary>1000000)
{tax=salary*0.12;
printf("%f is the tax to be paid",tax);
}
}
