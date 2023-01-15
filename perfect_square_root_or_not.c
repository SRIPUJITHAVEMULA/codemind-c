#include<stdio.h>
#include<math.h>
int main()
{
    int sq,s,n;
    scanf("%d",&n);
    sq=sqrt(n);
    s=sq*sq;
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}