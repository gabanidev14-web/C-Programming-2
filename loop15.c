#include<stdio.h>
int main()
{
    int i,n;
    float sum=0,num,mean;
    printf("enter the number of numbers you want sum and mean:\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("Enter number %d\n", i);
        scanf("%f", &num);    
        sum+=num;
    }
    mean=sum/n;
    printf("The sum is :%.2f\n", sum);
    printf("The mean is :%.2f\n", mean);
    
    return 0;
}