#include<stdio.h>
int main()
{
    char str[100],strn[100];
    gets(str);
    int i,len=0;
    for(i=0; str[i]!=0; i++)
    {
        len++;
    }
    for(i=0; str[i]!=0; i++)
    {
        strn[i]=str[len-i-1];
    }
    printf("%s\n",strn);

    return 0;

}
