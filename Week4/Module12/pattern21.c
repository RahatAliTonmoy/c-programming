#include<stdio.h>
int main()
{
    int n,j,s,i,k;
    scanf("%d",&n);
    s=0;
    k=n;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=s;j++)
        {
            printf(" ");
            for(j=1;j<=k;j++)
            {
                printf("*");
            }
        }
        s++;
        k = k-2;
        printf("\n");
    }
    return 0;
}