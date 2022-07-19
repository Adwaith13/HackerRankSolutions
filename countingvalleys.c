/*This is a solution for HackeRank Question
Counting Valleys*/

#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    char a[n];
    int c1=0,c2=0,x=0;
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
        if(a[i]=='U')
        {
            x++;
        if(x==0)
        {
            c2=0;
            c1++;
        }
        }
        else if(a[i]=='D')
        {
            if(a==0)
            c2=1;
            x--;
        }
    }
    printf("%d",c1);

}