#include<stdio.h>
int main()
{
    int i,n,product=1;
    printf("enter n:");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        product*=i;
    }
    printf("the factorial is:%d", product);
}