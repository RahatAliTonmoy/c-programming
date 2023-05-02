#include<stdio.h>
int main()
{
    int n,i,j,k,s;
    scanf("%d",&n);
    s=n-1;
    k=1;
    for(i=1;i<=(2*n)-1;i++)
    {
        for(j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(j=1;j<=k;j++)
        {
            printf("*");
        }
        if(i<=n-1)
        {
            k=k+2;
            s--;
        }
        else
        {
            k=k-2;
            s++;
        }
        printf("\n");
    }
    return 0;
}