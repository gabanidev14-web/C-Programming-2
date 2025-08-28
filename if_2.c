#include<stdio.h>
int main()
{
    int a,b,c,l,s;
    printf("enter three numbers:");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b)
    {
        l=a;
        s=b;
    }
    else{
        l=b;
        s=a;
    }
    if(c>l)
    {
        l=c;
    }
    if(c<l)
    {
        s=c;
    }
    printf("largest no is %d\n", l);
    printf("smallest no is %d", s);
}