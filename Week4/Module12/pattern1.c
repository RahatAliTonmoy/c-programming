#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int j, k=1;
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            printf("* ");
        }
        j++;
        k++;
        printf("\n");
    }
    return 0;

}