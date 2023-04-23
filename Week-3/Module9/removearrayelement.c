#include<stdio.h>
int main()
{
    int n,pos,val,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&pos);
    for(i=pos+1;i<n;i++)
    {
        ar[pos] = ar[i];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d\n",ar[i]);
    }
    return 0;
}