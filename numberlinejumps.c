/*This is a solution for HackeRank Question
Number Line Jumps*/


#include <stdio.h>

int main()
{
    int x1,v1,x2,v2,a,sum=0,b,sum2=0;
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
    
    if(x1 == x2)
    printf("YES\n");
    else if(v2>v1)
    {
        printf("NO\n");
    }
    else if(v2<v1)
    {

    while(x1 != x2)
    {
        a=x1;
        sum=a+v1;
        x1=sum;

        b=x2;
        sum2=b+v2;
        x2=sum2;

    }
        if(x1==x2)
        printf("YES\n");
        else
        printf("NO\n");
    }

    

    
    

}
