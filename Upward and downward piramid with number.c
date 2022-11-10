#include<stdio.h>
int main()
{
    int i,j,k,t,n;

    while(printf("Enter the number\n") && scanf("%d",&n)==1){

    for(j=1 ; j<=n ; j++)
    {
        for(i=1 ; i<=n-j+1 ; i++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    printf("\n");

    for(k=1 ; k<=n ; k++)
    {
        for(t=1 ; t<=k ; t++)
        {
            printf("%d",t);
        }
        printf("\n");
    }
     printf("\n");
    }
    return 0;
}
