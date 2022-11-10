#include<stdio.h>
int main()
{
    int n,marks;
    while(printf("Enter a marks = ") && (scanf("%d",&marks)==1))
    {
        if (marks>100)
        {
            printf("The grade is invalid\n");
        }
        else if (marks>=91)
        {
            printf("The grade is A+\n");
        }
        else  if (marks>=81)
        {
            printf("The grade is A\n");
        }
        else if (marks>=71)
        {
            printf("The grade is B\n");
        }
        else  if (marks>=61)
        {
            printf("The grade is C\n");
        }

        else
        {
            printf("The grade is F\n");
        }
    }

    return 0;


}
