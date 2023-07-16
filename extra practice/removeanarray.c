#include<stdio.h>
int main()
{
    int n,pos;
    scanf("%d %d",&n,&pos);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=pos-1;i<n;i++)
    {
        ar[i]=ar[i+1];
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}