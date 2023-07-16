#include<stdio.h>
int main()
{
    int n,prime = 0 ;
    scanf("%d",&n);
    if(n==0 || n==1)
    {
        printf("%d is not a prime number",n);
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            prime=1;
            break;
        }
    }
    if(prime==0)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
    return 0;

}