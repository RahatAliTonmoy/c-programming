#include<stdio.h>
int main()
{
    char ch;
    char s[100];
    char sen[100];
    scanf("%c",&ch);
    printf("%c\n",ch);
    scanf("%s", s);
    printf("%s",s);
    getchar();
    fgets(sen,100,stdin);
    printf("%s",sen);
    return 0;
}