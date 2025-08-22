#include<stdio.h>
int main()
{
    int ns,gs,a,d;
    printf("enter gross salary:");
    scanf("%d", &gs);
    if(gs>10000)
    {
        a=gs/10;
        d=gs*3/100;
        ns=gs+a-d;
        printf("net salary is:%d", ns);
    }
    if(9999>gs>5000);
    {
        a=gs*7/100;
        d=gs*2/100;
        ns=gs+a-d;
        printf("net salary is:%d", ns);
    }
}
