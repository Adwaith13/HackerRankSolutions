/*This is a solution for HackeRank Question
Very Big Sum*/

#include <stdio.h>

int main()
{
    int n,i,sum=0;
    scanf("%d",&n);

    long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
        sum=sum+a[i];
    }
    printf("%ld\n",sum);
    
}