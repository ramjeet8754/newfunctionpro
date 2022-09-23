#include <stdio.h>

void main1()
{
    int x,y,c;
    printf("enter x and y:");
    scanf("%d %d",&x,&y);
    c=sum(x,y);
    printf("sum=%d",c);
}
int sums(int a,int b)
{
    return a+b;
}
