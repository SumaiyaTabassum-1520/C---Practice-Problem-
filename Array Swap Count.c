#include<stdio.h>
int main()
{
    int a[100];
    int n,i,item;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter your data :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("before swap Your array :");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }


    int temp,j;

    int countSwap=0,passCount=0;

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                passCount+=1;
            }

        }
        countSwap+=1;
    }
    printf("\nAfter swap Your array  :");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nSwap count = %d\n",countSwap);
    printf("pass count = %d\n",passCount);

    return 0;
}


