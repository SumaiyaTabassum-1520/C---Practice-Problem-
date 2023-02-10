#include<stdio.h>
int array1[50][50],array2[50][50],sum[50][50],sub[50][50],multiplication[50][50];
int i,j,r,c,n,k;
int printMenu()
{
    printf("\n\n");
    printf("\t\t Enter your choice:\n");
    printf("\t\t 1 for addition\n");
    printf("\t\t 2 for subtraction\n");
    printf("\t\t 3 for multiplication\n");
    return 1;
}
int main()
{
    int option,breakLoop=0;
    while(printMenu()==1 && scanf("%d",&option)==1)
    {
        switch(option)
        {
        case 1:

            printf("Enter the row number : ");
            scanf("%d",&r);
            printf("Enter the column number: ");
            scanf("%d",&c);
            printf("Enter the first matrix\n");
            for(i=0 ; i<r ; i++)
            {
                for(j=0 ; j<c; j++)
                {
                    scanf("%d",&array1[i][j]);
                }
            }
            printf("Enter the second matrix\n");
            for(i=0 ; i<r ; i++)
            {
                for(j=0 ; j<c; j++)
                {
                    scanf("%d",&array2[i][j]);
                }
            }
            additionMatrix();
            break;
        case 2:
            printf("Enter the row number : ");
            scanf("%d",&r);
            printf("Enter the column number: ");
            scanf("%d",&c);
            printf("Enter the first matrix\n");
            for(i=0 ; i<r ; i++)
            {
                for(j=0 ; j<c; j++)
                {
                    scanf("%d",&array1[i][j]);
                }
            }
            printf("Enter the second matrix\n");
            for(i=0 ; i<r ; i++)
            {
                for(j=0 ; j<c; j++)
                {
                    scanf("%d",&array2[i][j]);
                }
            }
            subtractionMatrix();
            break;
        case 3:
            printf("Enter the row number : ");
            scanf("%d",&n);
            printf("Enter the column number: ");
            scanf("%d",&n);
            printf("Enter the first matrix\n");
            for(i=0 ; i<n ; i++)
            {
                for(j=0 ; j<n; j++)
                {
                    scanf("%d",&array1[i][j]);
                }
            }
            printf("Enter the second matrix\n");
            for(i=0 ; i<n ; i++)
            {
                for(j=0 ; j<n; j++)
                {
                    scanf("%d",&array2[i][j]);
                }
            }
            multiplicationMatrix();
            break;
        case 5:
            breakLoop=1;
            break;
        default:
            printf("Wrong input");
            break;
        }
        if(breakLoop==1)
        {
            break;
        }
    }
}
void  additionMatrix()
{
    for(i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<c; j++)
        {
            sum[i][j]=array1[i][j]+array2[i][j];
        }
    }
    printf("After addition the matrix");
    for(i=0 ; i<r ; i++)
    {
        printf("\n");
        for(j=0 ; j<c; j++)
        {
            printf("%d ",sum[i][j]);
        }
    }

}
void  subtractionMatrix()
{
    for(i=0 ; i<r ; i++)
    {
        for(j=0 ; j<c; j++)
        {
            sub[i][j]=array1[i][j]-array2[i][j];
        }
    }
    printf("After subtraction the matrix");
    for(i=0 ; i<r ; i++)
    {
        printf("\n");
        for(j=0 ; j<c; j++)
        {
            printf("%d ",sub[i][j]);
        }
    }

}
void  multiplicationMatrix()
{
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n; j++)
        {
             int sum=0;
            for(k=0; k<n ; k++)
            {
                multiplication[i][k]+=array1[j][k]*array2[k][j];
            }

        }
    }
    printf("After multiplication the matrix");
    for(i=0 ; i<n ; i++)
    {
        printf("\n");
        for(j=0 ; j<n; j++)
        {
            printf("%d ",multiplication[j][i]);
        }
    }


}
