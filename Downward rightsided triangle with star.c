#include<stdio.h>
int main()
{
    int i,j,n;
    while(printf("Enter the number\n") && scanf("%d",&n)==1)
    {

        for(j=1 ; j<=n ; j++)
        {
            for(i=1 ; i<=n-j+1 ; i++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
