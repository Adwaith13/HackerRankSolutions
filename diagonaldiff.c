/*This is a solution for HackeRank Question
Diagonal Difference*/

#include <stdio.h>

int main()
{
    int n,a[100],a[100],i,j,d1=0,d2=0,sub=0;
    scanf("%d",&n);  

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i],&a[j]);

            if(i==j)
            {
                d1=d1+a[i]+a[j];
            }
            if(i==(n-j-1))
            {
                d2=d2+a[i]+a[j];
            }

        }
    }
    sub=abs(d1-d2);
    printf("%d",sub);
}