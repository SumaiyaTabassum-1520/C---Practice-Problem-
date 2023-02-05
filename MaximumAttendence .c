/*Input(example)
3
001 PPPPPAAAAA
002 PPPPPPPPAA
005 PPPPPPPPPP
*/
#include<stdio.h>

struct Attendance
{
    char ID[100];
    char attnd[100];
};

int main()
{
    struct Attendance student[100];
    int n,i,j;
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        scanf("%s %s",student[i].ID,student[i].attnd);
    }

    for(i=0 ; i<n ; i++)
    {
        int count=0;
        for(j=0 ; student[i].attnd[j]!=0 ; j++)
        {
            if(student[i].attnd[j]=='P')
            {
                count=count+1;
            }
        }
        //printf("%d\n",count);

        if(count>7)
        {
            printf("%s\n",student[i].ID);
        }
    }

    return 0;
}

