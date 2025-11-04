#include<stdio.h>
int main()
{
    int a,i,min,max;
    scanf("%d", &a);
    max=min=a;
    for(i=2;i<=100;i++){
        printf("enter number %d\n",i);
        scanf("%d", &a);
        if(a>max) max=a;
        if(a<min) min=a;
    }
    printf("Max:%d Min:%d\n", max,min);
    return 0;
}