#include<stdio.h>
int main()
{
    int i,j,n,k;
    while(printf("Enter the number\n") && scanf("%d",&n)==1)
    {

        for(j=1; j<=n ; j++)
        {
            for(i=1 ; i<=n-j; i++)
            {
                printf(" ");
            }
            for(k=1 ; k<=j ; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}


