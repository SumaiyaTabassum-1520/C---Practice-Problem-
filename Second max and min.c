#include<stdio.h>
int main()
{
    int a[100];
    int n,i,j,temp;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter your data :");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int firstMax=a[0];
    int secondMax=-1;
    for(i=1; i<n; i++)
    {
        if(a[i]>firstMax)
        {
            secondMax=firstMax;
            firstMax=a[i];
        }
        else if(a[i]>secondMax)
        {
            secondMax=a[i];
        }
    }
    printf("The second maximum number of array is %d",secondMax);
    int firstMin=a[0];
    int secondMin=-1;
    for(i=1; i<n; i++)
    {
        if(a[i]<firstMin)
        {
            secondMin=firstMin;
            firstMin=a[i];
        }
        else if(a[i]<secondMin)
        {
            secondMin=a[i];
        }
    }

    printf("\nThe second Minimum number of array is %d\n",secondMin);
    return 0;
}
