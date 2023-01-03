#include<stdio.h>

int sumOfSquares(int n)
{
    int res=0;
    if(n==1)
    {
        return n;
    }
    res=n*n+sumOfSquares(n-1);

    printf("%d ",n);
    return res;
}

int main()
{
    int result;
    result=sumOfSquares(5);
    printf("\n%d",result);
    return 0;
}
