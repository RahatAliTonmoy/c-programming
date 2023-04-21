#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for ( i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;n--)
    {
        printf("%d\n",ar[n-1]);
    }
    return 0;
}