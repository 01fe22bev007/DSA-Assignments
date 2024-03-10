#include<stdio.h>

main()
{
   int n;
   int a[50];
   void read_array(int a[50],int n);
   void display_array(int a[50],int n);
   void sum_array(int a[50],int n);
   printf("enter no of elements in array\n");
   scanf("%d",&n);
   if(n>=1 && n<=50)
   {
        read_array(a,n);
        display_array(a,n);
        sum_array(a,n);

   }
   else
    {
          printf("invalid number\n");
    }
}
 void read_array(int a[50],int n)
 {
 int i;
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
 }

 void display_array(int a[50],int n)
 {
 int i;
    printf("the array elements\n");
    for(i=0;i<n;i++)
    {
       printf("%d\n",a[i]);
    }
 }
void sum_array(int a[50],int n)
{
    int s=0,i;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("sum of array elements=%d\n",s);
}
