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
    int cnt[7]={0};
    for(int i=0;i<n;i++)
    {
        int var=ar[i];
        cnt[var]++;
    }
    for(int i=0;i<7;i++)
    {
        printf("%d - %d\n",i,cnt[i]);
    }
    return 0;
}