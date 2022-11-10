#include<stdio.h>
int main()
{
    int i,j,k,t,n;
    while(printf("Enter the number\n") && scanf("%d",&n)==1){

    for(j=1 ; j<=n ; j++)
    {
        for(k=1 ; k<=n-j ; k++)
        {
            printf(" ");
        }
        for(i=1 ; i<=n-k+j ; i++)
        {
            int temp=(i<=j ? i+j-1 : 3*j-i-1);

            printf("%d",temp);
            /* if(i<=j)
             {
                 printf("%d",i+j-1);
             }
             else
             {
                 printf("%d",3*j-i-1);
             }*/
        }
        printf("\n");
    }
    printf("\n");
    }
    return 0;
}
