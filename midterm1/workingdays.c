#include<stdio.h>
int main()
{
    int m1,m2,d;
    scanf("%d %d %d",&m1,&m2,&d);
    float days =(m1*d)/m2;
    printf("%.f",days);
    return 0;
}