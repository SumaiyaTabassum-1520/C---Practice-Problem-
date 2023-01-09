#include<stdio.h>
int main()
{
    char strn[50];
    while(printf("Enter the string: ") && (scanf("%s",strn))==1)
    {
        int i,count=0;
        for(i=0 ; strn[i]!=0 ; i++)
        {
            if(strn[i]=='a' || strn[i]=='A' || strn[i]=='e' || strn[i]=='E'|| strn[i]=='i' ||strn[i]=='I' || strn[i]=='o'||strn[i]=='O'  || strn[i]=='u'||strn[i]=='U')
                count=count+1;
        }

          printf("%d\n",count);
    }

    return 0;
}
