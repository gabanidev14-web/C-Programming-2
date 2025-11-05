#include<stdio.h>
int main()
{
    int sum=0;
    for(int n=2;n<=500;n++){
        int j=1;
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                j=0;
                break;
            }
        }
        sum=sum+n;
    }
    printf("the sum is %d\n", sum);
    return 0;
}