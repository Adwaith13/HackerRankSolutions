/*This is a solution for HackeRank Question
Bill Division*/

#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);

    int a[n],i,charged=0,actual=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&charged);
    int sum=0;
    for(i=0;i<n;i++){
    sum=sum+a[i];
    }    
    actual=(sum-a[k])/2;
    if(charged > actual)
        {
            printf("%d",charged-actual);
        }
        else
        {
            printf("Bon Appetit");
        }
}