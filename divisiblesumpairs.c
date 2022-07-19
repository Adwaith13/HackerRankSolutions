/*This is a solution for HackeRank Question
Divisible Sum Pairs*/

#include <stdio.h>

int main()
{
    int n,k,i,j,sum=0,c=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++){
        sum=a[i]+a[j];
        if( sum % k ==0)
        {
            c++;
        }
        }
    }

    printf("%d",c);
}