#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    while(n>0){
        printf("%d ",n%10);
        n/=10;
    }
}