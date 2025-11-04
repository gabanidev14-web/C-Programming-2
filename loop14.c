#include<stdio.h>
int main()
{
    float a[10],n,sum=0;
    int i;
    printf("enter ten numbers:");
    for( i=0;i<=9;i++)
    {
        scanf("%f", &a[i]);
        sum=sum+a[i];
    }
    n=sum/10;
    printf("sum is %f\n", sum);
    printf("mean is %f\n", n);
    return 0;
}