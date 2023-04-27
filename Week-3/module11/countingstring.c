#include<stdio.h>
#include<string.h>
int main()
{
    char ar[100];
    scanf("%s",&ar);
    int cnt[26] ={0};
    for(int i=0;i<strlen(ar);i++)
    {
        int val = ar[i]-97;
        cnt[val]++;
    }
    for(int i=0;i<strlen(ar);i++)
    {
        int value =ar[i]-97;
        if(cnt[value]!=0)
        {
            printf("%c %d\n",value+97,cnt[value]);
        }
        cnt[value]=0;
    }
    return 0;
}