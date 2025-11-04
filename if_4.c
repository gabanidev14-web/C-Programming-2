#include<stdio.h>
int main()
{
    int no;
    printf("Enter any Integer:");
    scanf("%d", &no);
    if(no % 7 ==0)
    {
        printf("%d is divisible by 7", no);
    }
    else{
        printf("%d is not divisible by 7", no);
    }
}