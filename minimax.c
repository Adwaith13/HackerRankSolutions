/*This is a solution for HackeRank Question
Mini-Max Sum*/

#include <stdio.h>
#include <math.h>

void main()
{
    int i;
    long sum=0;
    int a[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",a+i);
        sum=sum+a[i];
    }
    int min=a[0],max=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]>max)
        max=a[i];

        else if(a[i]<min)
        min=a[i];
    }
    printf("%d %d",sum-max,sum-min);

    
   
}