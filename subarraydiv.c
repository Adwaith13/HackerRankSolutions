/*This is a solution for HackeRank Question
Sub Array Division*/

#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int d,m,count=0;
    scanf("%d %d",&d,&m);
    for(i=0;i<n;i++)
    {
        int sum=0;
        if(i+m<=n)
        for(j=0;j<m;j++)
        {
            sum=sum+a[i+j];
        }
        if(sum==d)
        {
            count++;
        }
    }
    printf("%d",count);


}