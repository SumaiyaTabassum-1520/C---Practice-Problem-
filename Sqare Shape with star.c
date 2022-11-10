#include<stdio.h>
int main()
{
    int i,n,j;
    while(printf("Enter the number\n") && scanf("%d",&n)==1)
    {

        for(j=1 ; j<=n ; j++)
        {
            for(i=1 ; i<=n ; i++)
            {
                printf("*");
            }
            printf("\n");

        }
        printf("\n");
    }
    return 0;
}
