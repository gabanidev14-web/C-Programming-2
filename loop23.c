#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the number: \n");
    scanf("%d", &n);
    do{
        sum = sum + n%10;
        n/=10;
    }while(n>0);
    printf("the sum of digits is %d\n", sum);
    return 0;
}