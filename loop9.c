#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("enter the value of n:");
    scanf("%d", &n);
    for(i=0;i<=2*n;i+=2)
    {
        sum+=i;
    }
    printf("the sum is:%d", sum);
    return 0;
}