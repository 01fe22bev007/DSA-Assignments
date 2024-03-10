#include<stdio.h>
#include<time.h>

int main()
{
    FILE *fp=fopen("randomfinal.txt","w");
     if (fp == NULL)
    {
        printf("Error\n");
        return 1;
    }

    srand(time(NULL));
    printf("The data taken by random generator is=\n");
    for (int i = 0; i < 10; i++)
    {
        int random = rand()%51;
        fprintf(fp,"%d\n",random);
    }

    fclose(fp);
    printf("file saved");
    return 0;
}

