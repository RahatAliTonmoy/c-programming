#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int ar[n];
    int x= n/k;
    int y= n%k;
    int ar1[k],ar2[k],ar3[k];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i<k)
        {
            ar1[i]=ar[i];
        }
        else if (i>=k && i<k*2)
        {
            ar2[i]=ar[i];
        }
        
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    for(int i=0;i<k;i++)
    {
        printf("%d ",ar1[i]);
    }
    return 0;
}