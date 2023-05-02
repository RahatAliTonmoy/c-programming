#include<stdio.h>
int main()
{
    int n,i,j,flag=0;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int x;
    scanf("%d",&x);
    i=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ar[i]+ar[j]==x)
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}