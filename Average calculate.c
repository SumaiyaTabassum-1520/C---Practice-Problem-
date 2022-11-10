#include<stdio.h>
#define s(n) scanf("%d",&n)
#define pi 3.1416
#define p(n) printf("Average %.2f\n",(float)sum/count)
#define pf(n) printf("%d\n",n)
int main()
{
    int count=0,sum=0,n;
    int r = 6;
    int parameter = 2*pi*r;
    while(s(n)==1){
        if(n==-1){
            break;
        }
        count++;
        sum=sum+n;
    }
    p((float)sum/count);
    return 0;
}
