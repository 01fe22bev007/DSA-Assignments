#include<stdio.h>
float Area_circle(float r);
main()
{
float r,A;
printf("enter radius\n");
scanf("%f",&r);
A=Area_circle(r);
printf("Area of circle is %f\n",A);}
float Area_circle(float r)
{
    float A;
A=3.142*pow(r,2);
return A;
}
