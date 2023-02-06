//string concatenation
#include<stdio.h>
int main()
{
    char str[100],dst[100],ctr[100];
    printf("Enter the first string: ");
    gets(str);
    printf("Enter the second string: ");
    gets(dst);
    int i,j;
    for(i=0 ; str[i]!=0 ; i++)
    {
        ctr[i]=str[i];
    }
    ctr[i]=0;

    for(j=0 ; dst[j]!=0 ; j++)
    {
        ctr[i]=dst[j];
        i++;
    }
    ctr[i]=0;
    printf("%s\n",ctr);
    return 0;
}
