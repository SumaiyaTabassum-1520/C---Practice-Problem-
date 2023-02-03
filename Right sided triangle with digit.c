#include<stdio.h>
int main()
{
    int i,n,j,k=1;
    printf("Enter the row\n");
    scanf("%d",&n);

    for(j=1 ; j<=n ; j++)
    {
        for(i=1 ; i<=j ; i++)
        {
            printf("%d ",k);
            k++;
        }

        printf("\n");

    }
    return 0;
}
