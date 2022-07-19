/*This is a solution for HackeRank Question
Birthday Cake Candles*/

#include <stdio.h>

int main()
{
    int n,i,x=0,count=0;
    scanf("%d",&n);
    int a;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a); 
        if(a>x)
        {
            x=a;
            count=1;
        }
        else if(a==x)
        count++;
        
    }
    printf("%d",count);
}