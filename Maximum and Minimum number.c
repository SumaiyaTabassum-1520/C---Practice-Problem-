#include<stdio.h>
int main()
{
    int i,n,count=0,max=-9999,min=9999;
    int number[100];
    while(printf("Enter numbers:\n")&&scanf("%d",&(number[count]))==1)
    {

        if(number[count]==-1)
        {
            break;
        }

        count++;
    }
    for(i=0 ; i<count; i++ )
    {
        if (number[i]>max)
        {
            max=number[i];
        }
    }
    printf("The maximum number = %d\n",max);

    for(i=0 ; i<count; i++)
    {
        if(number[i]<min)
        {
            min=number[i];
        }
    }
    printf("The minimum number = %d\n",min);
    return 0;
}


