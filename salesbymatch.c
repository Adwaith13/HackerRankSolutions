/*This is a solution for HackeRank Question
Sales by Match*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>1)
        {
            if(a[i]%2==0)
            {
                sum=sum+a[i]/2;
            }
            else
            {
                sum=sum+(a[i]-1)/2;
            }
        }
    }
    printf("%d",sum);



}