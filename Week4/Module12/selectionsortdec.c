#include<stdio.h>
int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ar[i]<ar[j])
            {
                temp = ar[j];
                ar[j]=ar[i];
                ar[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",ar[i]);
    }
    return 0;
}