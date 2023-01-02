//uppercase to lowercase
#include<stdio.h>
int main()
{
    char strn[50],str[100],upper[100],lower[100];
    while((scanf("%s",strn))==1)
    {
        int i,count=0,count1=0,k;
        for(i=0; strn[i]!=0 ; i++)
        {
            if(strn[i] >= 'A' && strn[i] <= 'Z')
            {
                upper[count]=strn[i];
                count=count+1;
            }
            else if(strn[i] >= 'a' && strn[i] <= 'z')
            {
                lower[count1]=strn[i];
                count1=count1+1;
            }
        }
        upper[count]='\0';
        lower[count1]='\0';
        printf("Uppercase=%s\n",upper);
        printf("lowercase=%s\n",lower);
        printf("uppercase=%d\n",count);
        printf("lowercase=%d\n",count1);
    }
    return 0;
}

