#include<stdio.h>
int main()
{
    int n,rev=0,temp;
    printf("enter the number: \n");
    scanf("%d", &n);
    temp=n;
    while(n>0){
        rev=rev*10+(n%10);
        n/=10;
        }
    if(rev==temp){
        printf("%d is a palindrome\n",temp);
    }
    else{
        printf("%d is not a palindrome\n",temp);
    }
}