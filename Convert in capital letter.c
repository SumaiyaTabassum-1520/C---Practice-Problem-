#include<stdio.h>
int main()
{
    char strn[50];
    while(gets(strn))
    {
        int i;
        for(i=0 ; strn[i]!=0 ; i++)
        {
            if(strn[i] =='a'|| strn[i] =='e'||strn[i] =='i'|| strn[i] =='o'|| strn[i] =='u' )
            {
                if(strn[i] >= 'A' && strn[i] <= 'Z')
                {
                    strn[i] =  strn[i]+32;
                }
            }
            else
            {
                if(strn[i] >= 'a' && strn[i] <= 'z')
                {
                    strn[i] =  strn[i]-32;
                }
            }
        }
        printf("%s\n",strn);
    }
    return 0;
}
