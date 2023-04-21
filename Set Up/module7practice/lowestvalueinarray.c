#include<stdio.h>
#include<limits.h>
int main()
{
    int n,min,pos;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i=i+1)
    {
        scanf("%d",&ar[i]);
    }
    min = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(ar[i]<min)
        {
            min=ar[i];
            pos=i+1;
        }

    }
    printf("%d %d",min,pos);
    return 0;
}