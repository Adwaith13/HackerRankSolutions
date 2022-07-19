/*This is a solution for HackeRank Question
Staircase*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=i;j<(n-1);j++)
        {
            printf(" ");
        }
        for(k=0;k<(i+1);k++)
        {
            printf("#");
        }
        printf("\n");
    }
}

