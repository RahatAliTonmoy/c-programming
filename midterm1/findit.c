#include<stdio.h>
int main()
{
    int n,x,i,cnt=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            cnt++;
        }
    }

    printf("%d",cnt);
    return 0;
}