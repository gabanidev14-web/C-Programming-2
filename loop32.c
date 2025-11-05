#include<stdio.h>
int main()
{
    int count=0;
    for(int n=2;n<=500;n++){
        int j=1;
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                j=0;
                break;
            }
        }
        if(j==1)count=count+1;   
    }
    printf("There are %d prime numbers\n", count);
    return 0;
}