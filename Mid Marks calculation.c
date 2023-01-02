/*
    name[0] ="Alex" // name[0][0] = 'A' name[0][1] = 'l' name[0][2]= 'e' name[0][3] = 'x' name[0][4] = 'null' .......
    name[1] ="Alan"
    name[2] = "Arin"
    name[3] = "Abir"
    name[4] = "akib"s
*/
#include<stdio.h>
int main()
{
    char names[5][10]={"Alex","Alan","Arin","Abir","Akib"};
    int araA[100]= {70,95,60,75,80};
    int araB[100]= {61,71,85,95,75};
    int i,n=5;
    int maxidx=0;
    for(i=0 ; i<n ; i++)
    {
        if(araA[i]>araA[maxidx])
        {
             maxidx=i;
        }

    }
    printf("first mid highest=%d roll no=%d name=%s 2nd mid marks=%d\n",araA[maxidx],maxidx+1,names[maxidx],araB[maxidx]);


    maxidx=0;
     for(i=0 ; i<n ; i++)
    {
        if(araB[i]>araB[maxidx])
        {
             maxidx=i;
        }

    }
     printf("second mid highest=%d roll no=%d name=%s 1st mid marks=%d\n",araB[maxidx],maxidx+1,names[maxidx],araA[maxidx]);


   return 0;
}

