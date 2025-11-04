#include<stdio.h>
int main()
{
    float s,g,d;
    printf("enter gross sales:");
    scanf("%f", &g);
    d=g/10;
    s=g-d;
    printf("net sales is:%f", s);
    return 0;

}