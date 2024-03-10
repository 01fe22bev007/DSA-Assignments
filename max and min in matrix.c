int x[50],i;
main()
{
   int n;
   void read_array(int n);
   void display_array(int n);
   void max_array(int n);
   void min_array(int n);
   printf("enter how many elements\n");
   scanf("%d",&n);
   if(n>=1 && n<=50)
   {
       read_array(n);
       display_array(n);
       max_array(n);
       min_array(n);
   }
   else
   {
       printf("max you can enter 5 elements\n");
   }

 }

 void read_array(int n)
 {

     for(i=0;i<n;i++)
      {
      printf("enter a value\n");
      scanf("%d",&x[i]);
      }
 }

void display_array(int n)
{

     printf("the elements in the array are\n");
    for(i=0;i<n;i++)
     {
      printf("%d ",x[i]);
     }
}

void max_array(int n)
{
 int max=x[0];
 for(i=0;i<n;i++)
 {
     if(x[i]>max)
     {
        max=x[i];
     }
 }
 printf("maximum element=%d\n",max);
}

void min_array(int n)
{
 int min=x[0];
 for(i=0;i<n;i++)
 {
     if(x[i]<min)
     {
        min=x[i];
     }
 }
 printf("minimum element=%d\n",min);
}
