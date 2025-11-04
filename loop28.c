#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the number: \n");
    scanf("%d", &n);
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
        sum=sum+i;
        }
    }
    if(sum==n)printf("Perfect\n");
    else printf("Not Perfect");
}