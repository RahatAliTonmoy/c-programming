#include<stdio.h>
int main()
{
    int t,flag=0,index=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int ar[n];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ar[j]);
        }
        int s;
        scanf("%d",&s);
        flag=0;
        for(int j=0;j<n;j++)
        {
            if(s==ar[j])
            {
                flag=1;
                index=j+1;
                break;
            }
        }
        if(flag==1)
        {
            printf("Case %d: %d\n",i+1,index);
        }
        else
        {
            printf("Case %d:Not Found\n",i+1);
        }

    }
    
    return 0;
}