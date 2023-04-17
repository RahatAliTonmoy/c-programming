#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        if(i%2==0)
        {
            print("%d\n",i);
        }
        else if (n==1)
        {
            print("-1");
        }
        
    }
    return 0;
}