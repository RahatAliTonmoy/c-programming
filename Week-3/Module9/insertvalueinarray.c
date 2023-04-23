#include<stdio.h>
int main()
{
    int n,i,pos,v;
    scanf("%d",&n);
    int ar[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d %d",&pos,&v);
    for(i=n;i>=pos+1;i--)
    {
        ar[i]=ar[i-1];
    }
    
    ar[pos]=v;
    for(i=0;i<=n;i++)
    {
        printf("%d\n",ar[i]);
    }
    return 0;
}