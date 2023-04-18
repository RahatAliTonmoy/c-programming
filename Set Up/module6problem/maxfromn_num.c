#include<stdio.h>
int main()
{
    int n,i,max,a;
    scanf("%d",&n);
    max=0;
    for(i=1;i<=n;i=i+1)
    {
        scanf("%d",&a);
        if(a>=max)
        {
            max=a;
        }
    }
    printf("%d",max);
    return 0;
}