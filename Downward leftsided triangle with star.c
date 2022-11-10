#include<stdio.h>
int main()
{
    int i,n,j,k;
    while(printf("Enter the number\n") && scanf("%d",&n)==1)
    {

        for(j=1 ; j<=n ; j++)
        {
            for(k=1 ; k<=j-1 ; k++)
            {
                printf(" ");
            }
            for(i=1 ; i<=n-j+1 ; i++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
