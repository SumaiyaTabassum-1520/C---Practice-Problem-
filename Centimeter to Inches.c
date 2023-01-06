#include<stdio.h>
#include<math.h>
int main()
{
    float a,l;
    printf("Enter the length of the book : ");
    scanf("%f",&a);
    l= a/2.54;
    printf("length of the book is %.2f inches\n",l);
    return 0;
}
