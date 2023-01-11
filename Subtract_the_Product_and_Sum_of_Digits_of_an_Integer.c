#include<stdio.h>
int main()
{
    int n,p=1,s=0,d,o,rem;
    scanf("%d",&n);
    o=n;
    while(n!=0)
    {
        rem=n%10;
        p=p*rem;
        s=s+rem;
        n=n/10;
    }
    d=(p-s);
    printf("%d",d);
}