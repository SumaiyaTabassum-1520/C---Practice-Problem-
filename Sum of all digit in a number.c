#include<stdio.h>
int main()
{
    int i,n,a,sum=0;

    while(printf("Enter the number\n")&&scanf("%d",&n)==1){

    for(i=1 ; n>0 ; n=n/10)

    {
        a=n%10;
        sum=sum+a;

    }
    printf("%d\n",sum);

}
    return 0;


}
