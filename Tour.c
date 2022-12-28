#include<stdio.h>
int main()
{
    int x,m,n,y,i;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        scanf("%d%d",&n,&m);
        y=(n*5)+(m*7);
        printf("%d
",y);
    }
}