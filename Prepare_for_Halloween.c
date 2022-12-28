#include<stdio.h>
int main()
{
    int n,x,y,m,p,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&x,&y);
        m=x*2;
        p=y*5;
        if(m>p)
        {
            printf("Chocolate
");
        }
        else if(m<p)
        {
            printf("Candy
");
        }
        else
        {
            printf("Either
");
        }
    }
}