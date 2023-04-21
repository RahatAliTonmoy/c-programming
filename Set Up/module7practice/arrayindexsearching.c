#include<stdio.h>
int main()
{
    long long int n,i;
    int position;
    scanf("%lld",&n);
    long long int ar[n];
    for (i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
    }
    long long int X;
    scanf("%lld",&X);
    for(i=0;i<=n;i++)
    {
      if(ar[i]==X && i==0)
      {
        position=0;
        break; 
      }
      else if (ar[i]==X && i>0)
      {
        position=i;
        break;
      }
      else
      {
        position=-1;
      }
    }
    printf("%d",position);

    return 0;
}