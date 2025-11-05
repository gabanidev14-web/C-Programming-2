#include<stdio.h>
int main(){
    int n,temp,sq;
    int j=1;
    temp=n;
    printf("enter n: \n");
    scanf("%d", &n);
    sq=n*n;
    while(n>0){
        if(n%10 != sq%10) j=0;
        n/=10;
        sq/=10;
    }
    if(j)printf("Automorphic\n",temp);
    else printf("Not Automorphic\n",temp);
    return 0;
}