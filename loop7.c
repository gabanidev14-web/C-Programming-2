#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("�nter the value of n:\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
    sum+=i;
    }
    printf("the sum is %d\n", sum);
}
