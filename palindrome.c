#include<stdio.h>
#include<string.h>
main()
{
    char a[20];
    char temp[20];
    printf("enter the string=");
    gets(a);

    strcpy(temp,a);
    strrev(a);

    if(strcmp(a,temp)==0)
    {
        printf("it is a palindrome");
    }
    else
    {
        printf("its not a palindrome");
    }

}
