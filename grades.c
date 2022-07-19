/*This is a solution for HackeRank Question
Grading Students*/


#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);

    int a;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a<38)
        printf("%d\n",a);
        else if(5-(a%5)<3)
        printf("%d\n",5*(a/5+1));
        else
        printf("%d\n",a);
    }
}