#include <stdio.h>
int main()
{
    int array[10][10], transposeMatrix[10][10],i,j,r,c;
    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("Enter matrix elements:\n");
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            transposeMatrix[j][i] = array[i][j];
        }
    }
    printf("Transpose of the matrix:");
    for (i=0; i<r; i++)
    {
        printf("\n");
        for (j=0; j<c; j++)
        {
            printf("%d  ",transposeMatrix[i][j]);
        }
    }
    return 0;
}
