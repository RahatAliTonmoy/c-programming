#include<stdio.h>
int main()
{
    int test,n,t;
    scanf("%d",&test);
    for(t=1;t<=test;t=t+1)
    {
        scanf("%d",&n);
        do
        {
            printf("%d ",n%10);
            n=n/10;
        } 
        while (n!=0);
        printf("\n");
    }

    return 0;
}