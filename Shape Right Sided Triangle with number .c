#include<stdio.h>
int main()
{
    int i,n,j;
     while(printf("Enter the number\n") && scanf("%d",&n)==1)
    {

    for(j=1 ; j<=n ; j++)
    {
        for(i=1 ; i<=j ; i++)
        {
            if(j%2==1)
            {
                printf("%d",i%2);
            }
            else
                printf("%d",!(i%2));

        }
        printf("\n");
    }
    }
    return 0;
}

// int temp=(i<=j+1 ? i==1 : i==0);
