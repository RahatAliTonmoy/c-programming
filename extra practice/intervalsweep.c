#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int ans =a-b;
    if(ans<0)
    {
        ans=ans*-1;
    }
    if(ans>1)
    {
        printf("NO");
    }
    else if(a==0 && b==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}