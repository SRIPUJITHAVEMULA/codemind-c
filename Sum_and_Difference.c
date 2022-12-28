#include<stdio.h>
int main()
{
    int a,b,c,d;
    float e,f,g,h;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&e,&f);
    c=a+b;
    d=a-b;
    printf("%d %d
",c,d);
    g=e+f;
    h=e-f;
    printf("%0.1f %0.1f",g,h);
}