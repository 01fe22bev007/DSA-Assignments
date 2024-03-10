#include<stdio.h>
main()
{
    int a[30][40],N,M;
    void read_array(int a[30][40],int N,int M);
    void display_array(int a[30][40],int N,int M);
    void max_array(int a[30][40],int N,int M);
    printf("enter no of students and courses\n");
    scanf("%d%d",&N,&M);
    if((N>=1 && N<=30) && (M>=1 && M<=40))
    {
         read_array(a,N,M);
       display_array(a,N,M);
       max_array(a,N,M);
    }
    else
        {
              printf("invalid students count/courses count\n");
         }

}

void read_array(int a[30][40],int N,int M)
{
     int i,j;
     printf("enter the marks\n");
     for(i=0;i<N;i++)
     {
         for(j=0;j<M;j++)
         {
            scanf("%d",&a[i][j]);
         }
     }
}

void display_array(int a[30][40],int N,int M)
{
     int i,j;
     printf("the marks sheet is\n");
     for(i=0;i<N;i++)
     {
         for(j=0;j<M;j++)
         {
            printf("%d ",a[i][j]);
         }
        printf("\n");
     }
}

void max_array(int a[30][40],int N,int M)
{
    int max,i,j;

     for(i=0;i<N;i++)
     {
         max=a[i][0];
         for(j=0;j<N;j++)
         {
           if(a[i][0]>max)
           {
           max=a[i][0];
           }
         }
         printf("max marks of student %d=%d\n",i+1,max);
     }
}
