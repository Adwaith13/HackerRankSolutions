/*This is a solution for HackeRank Question
Cat and Mouse*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,x,y,z;
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        int s1=abs(x-z);
        int s2=abs(y-z);
        if(s1<s2)
        {
           printf("Cat A\n");
        }
        else if(s2<s1)
        {
            printf("Cat B\n");
        }
        else{
            printf("Mouse C");
        }
    }
    
    

}