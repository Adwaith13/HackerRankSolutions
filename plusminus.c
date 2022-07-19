/*This is a solution for HackeRank Question
Plus Minus*/

#include <stdio.h>
int main()
{
    int n,i,pos=0,neg=0,zero=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]>0)
        pos++;

        if(a[i]<0)
        neg++;

        if(a[i]==0)
        zero++;
    }

    printf("%0.6f%0.6f%0.6f",pos,neg,zero);


}