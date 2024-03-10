#include<stdio.h>
main()
{ int x[50][50],y[50][50],xrow,xcol,yrow,ycol;
   void read(int x[50][50],int row,int col);
   void display(int x[50][50],int row,int col);
   void add(int x[50][50],int y[50][50],int row,int col);


  printf("enter rows and column of matrix X=\n");
  scanf("%d %d",&xrow,&xcol);
  printf("enter row and column of matrix Y=\n");
  scanf("%d %d",&yrow,&ycol);
    if(xrow==yrow && xcol==ycol)
    {
      read(x,xrow,xcol);
      read(y,yrow,ycol);
      display(x,xrow,xcol);
      display(y,yrow,ycol);
      add(x,y,xrow,ycol);
    }
    else
    {
        printf("As rows and columns doesn't match, we cannot add it ");
    }}

void read(int x[50][50],int row,int col)
{
     int i,j;
     //printf("Enter the elements=\n");
     for(i=0;i<row;i++)
     {
         for (int j = 0; j < col; j++)
        {
            x[i][j] = rand()%100;
        }
     }
}

void display(int x[50][50],int row,int col)
{
     int i,j;
     printf("The entered elements are=\n");
     for(i=0;i<row;i++)
     {
         for(j=0;j<col;j++)
         {
            printf("%d ",x[i][j]);
         }
        printf("\n");
     }
}

void add(int x[50][50],int y[50][50],int row,int col)
{
    int z[50][50];
    int i,j;
    printf("Hence the addition is given below\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            z[i][j]=x[i][j]+y[i][j];

        }
    }
    display(z,row,col);
}



