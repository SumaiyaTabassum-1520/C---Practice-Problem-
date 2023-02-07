#include<stdio.h>

void AddColumns(int arr[10][10], int i, int j)
{
    int rows, columns, Sum = 0;
    for(columns = 0; columns < j; columns++)
    {
        for(rows = 0; rows < i; rows++)
        {
            Sum = Sum + arr[rows][columns];
        }
        printf("The Sum of %d Column Elements in a Matrix =  %d \n", columns,Sum );
    }

}
int main()
{
    int i, j, rows, columns, a[10][10];

    printf("Please Enter Number of rows and columns  :  ");
    scanf("%d %d", &i, &j);

    printf("Please Enter the Matrix Row and Column Elements \n");
    for(rows = 0; rows < i; rows++)
    {
        for(columns = 0; columns < j; columns++)
        {
            scanf("%d", &a[rows][columns]);
        }
    }
    AddColumns(a, i, j);
    return 0;
}
