#include<stdio.h>
int main()
{
    int i,j,k,a,b,c,n;
    while(printf("Enter the number\n") && scanf("%d",&n)==1)
    {

        for(j=1 ; j<=n ; j++)
        {
            for(k=1 ; k<=n-j ; k++)
            {
                printf(" ");
            }
            for(i=1 ; i<=n-k+j ; i++)
            {
                if(i==1 || i==(n-k+j) )
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        for(a=1 ; a<=n ; a++)
        {
            for(c=1 ; c<=a ; c++)
            {
                printf(" ");
            }
            for(b=1 ; b<=2*(n-a)-1; b++)
            {

                if(b==1  || b==2*(n-a)-1  )
                {
                    printf("*");
                }
                else
                    printf(" ");
            }

            printf("\n");
        }
        printf("\n");
    }
    return 0 ;

}



