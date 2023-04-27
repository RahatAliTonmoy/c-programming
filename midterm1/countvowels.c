#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    char ar[5]={'a','e','i','o','u'};
    int vowels=0;
    for(int i=0;i<strlen(s);i++)
    {
        int value = s[i];
        for(int i=0;i<5;i++)
        {
            if(ar[i]==value)
            {
                vowels++;
            }
        }
    }
    printf("%d",vowels);
    return 0;
}