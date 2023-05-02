#include<stdio.h>
int main()
{
    int n,j,i,temp;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(ar[i]>ar[j])
            {
                temp =ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",ar[i]);
    }
    return 0;
}