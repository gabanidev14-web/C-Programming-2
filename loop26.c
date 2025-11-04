#include<stdio.h>
int main()
{
    int n,temp,sum=0,d;
    printf("enter the number: \n");
    scanf("%d", &n);
    temp=n;
    while(n>0){
        d=n%10;
        sum+=(d*d*d);
        n/=10;
    }
    if(sum==temp) printf("%d is armstrong\n",temp);
    else printf("%d is not armstrong\n",temp);
}