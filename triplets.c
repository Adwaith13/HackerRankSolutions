/*This is a solution for HackeRank Question
Compare the Triplets*/

#include <stdio.h>

int main()
{
    int i,alice=0,bob=0;
    int a[3],b[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            alice++;
        }
        else if(b[i]>a[i])
        {
            bob++;
        }
    }
    printf("%d %d",alice,bob);

}
