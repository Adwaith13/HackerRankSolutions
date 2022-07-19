/*This is a solution for HackeRank Question
Breaking the Records*/

#include <stdio.h>

int main()
{
    int n,i,min,max,c1=0,c2=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            c1++;
            max=a[i];
        }

        if(a[i]<min){
            c2++;
            min=a[i];
        }
    }   
    printf("%d %d",c1,c2);
    
}

