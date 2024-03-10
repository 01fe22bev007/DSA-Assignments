#include<stdio.h>
main()
{
    FILE *fp=fopen("sample.txt","r");
    char ch;
    ch=fgetc(fp);
    printf("%c\n",ch);
    printf("data saved into file");
    fclose(fp);
}
