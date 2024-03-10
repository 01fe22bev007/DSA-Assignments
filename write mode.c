#include<stdio.h>
main()
{
    FILE *fp=fopen("sample.txt","w");
    char ch='p';
    fputc(ch,fp);
    char y='a';
    fputc(y,fp);
    printf("data saved into file");
    fclose(fp);
}
