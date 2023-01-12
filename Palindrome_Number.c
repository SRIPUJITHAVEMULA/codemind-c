#include<stdio.h>
int main()
{
    int m,i;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        int n,r,rev=0,o;
        scanf("%d",&n);
        o=n;
        while(n>0)
        {
            r=n%10;
            rev=(rev*10)+r;
            n=n/10;
        }
        if(o==rev)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}