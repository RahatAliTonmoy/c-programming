#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d",&r,&c);
    int ar[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int flag = 1;
    if(r!=c)
    {
        flag=0;
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                if(ar[i][j]!=ar[0][0])
                {
                    flag=0;
                }
            }
            else if(ar[i][j]!=0)
            {
                flag=0;
            }
        }
    }
    if(flag==1)
    {
        printf("Scalar Matrix");
    }
    else
    {
        printf("Not Scalar");
    }
    return 0;
}