#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int ar[n],sum=0;
    for (int i=0; i<n;i++)
    {
        scanf("%lld",&ar[i]);
        sum = sum+ar[i];
    }
    if (sum<0)
    {
        sum = sum*(-1);
        printf("%lld",sum);
    }
    else
    {
        printf("%lld",sum);
    }

    return 0;
}