#include<stdio.h>
int main()
{
    int n,p,t,v,count=0;;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&p,&t,&v);
        if(p==1 && v==1)
        {
            count=count+1;
        }
        else if (t==1 && v==1)
        {
            count=count+1;
        }
        else if (p==1 && t==1)
        {
            count=count+1;
        }
        
    }
    printf("%d",count);
    return 0;
}