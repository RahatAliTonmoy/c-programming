#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=12;i=i+1)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}