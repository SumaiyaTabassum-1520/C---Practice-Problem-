#include<stdio.h>
int main()
{
    int i,j,k,n;
    while(printf("Enter the number\n") && scanf("%d",&n)==1)
    {

        for(j=1 ; j<=n ; j++)
        {
            for(k=1 ; k<=n-j ; k++)
            {
                printf(" ");
            }
            for(i=1 ; i<=j+k ; i++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

