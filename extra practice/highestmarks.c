#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int max=ar[0];
    for(int i=0;i<n;i++)
    {
        if(ar[i]>=max)
        {
            max=ar[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        ar[i]=max-ar[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}