#include<stdio.h>
int main()
{
    // prime nos between 1 and 500
    for(int n=2;n<=500;n++){
        int j=1;
        for(int i=2;i<=n/2;i++){
            if(n%i==0) {
                j=0;
                break;
            }
        }
        if(j) printf("%d ",n);
    }
}