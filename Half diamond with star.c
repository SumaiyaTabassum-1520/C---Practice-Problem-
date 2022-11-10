#include<stdio.h>
int main()
{
    int i,j,k,t,n;
    while(printf("Enter the number\n") && scanf("%d",&n)==1)
    {

        for(j=1 ; j<=n ; j++)
        {
            for(i=1 ; i<=j-1 ; i++)
            {
                printf("*");
            }
            printf("\n");
        }
        for(t=1 ; t<=n ; t++)
        {
            for(k=1 ; k<=n-t+1 ; k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

}


