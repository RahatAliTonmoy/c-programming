#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==n/2 && j==n/2)
            {
                printf("X");
            }
            
            else if(i==j)
            {
                printf("\\");
            }
            else if(n==(i+j)+1)
            {
                printf("/");
            }
            else
            {
                printf("*");
            }
            
        }
        printf("\n");
    }
    return 0;
}