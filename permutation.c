#include<stdio.h>
int main()
{
    int ara[100]= {7,8,9,4};
    int i,j,k,n=3;

    for(j=0 ; j<4 ; j++)
    {
        for(i=0 ; i<4 ; i++)
        {
            if(i!=j)
            {
                for(k=0 ; k<4 ; k++ )
                {
                    if(k!=i && k!=j)
                    {
                        printf("%d %d %d\n",ara[i],ara[j],ara[k]);
                    }
                }
            }
        }
    }
    return 0;
}
