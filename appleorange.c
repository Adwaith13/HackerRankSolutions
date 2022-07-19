/*This is a solution for HackeRank Question
Apple Orange*/

#include <stdio.h>

int main()
{
    int s,t;
    scanf("%d%d",&s,&t);
    int a,b;
    scanf("%d%d",&a,&b);
    int m,n;
    scanf("%d%d",&m,&n);
    int apples,oranges,i;
    int count=0,count1=0;
    for(i=0;i<m;i++)
    {
        scanf("%d",&apples);
        apples=apples+a;

        if(apples>=s && apples<=t)
        {
            count++;
        }
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&oranges);
        oranges=oranges+b;

        if(oranges>=s && oranges<=t)
        {
            count1++;
        }
    }
    printf("%d\n%d",count,count1);
    


}