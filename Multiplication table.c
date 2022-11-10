#include<stdio.h>
int main()
{
    int n,i;

    while(printf("Which multiplication table you want to see?\n") && scanf("%d",&n)==1)
    {
        for(i=1 ; i<=10 ; i++)
        {
            printf("%d*%d=%d\n",n,i,n*i);

        }
    }
    return 0;
}
