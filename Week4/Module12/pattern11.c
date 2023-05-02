#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    k=n-1;
    int s=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            printf(" ");
        }
        for(int x=1;x<=s;x++)
        {
            printf("*");
        }
        k--;
        s++;
        printf("\n");
    }
    return 0;
}