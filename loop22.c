#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter number\n");
    scanf("%d", &n);
    while(n>0){
        count++;
        n/=10;
    }
    printf("There are %d digits in the number", count);
}