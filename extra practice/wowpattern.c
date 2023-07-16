#include<stdio.h>
int main()
{
    int n,k=1,i,j;
    scanf("%d",&n);
    int s=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(j=1;j<=k;j++)
        {
            if(i%2!=0)
            {
                printf("^");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
        s--;
        k=k+2;

    }
    return 0;
}