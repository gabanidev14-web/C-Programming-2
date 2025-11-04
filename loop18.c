#include<stdio.h>
int main()
{
    char sex;
    int boys=0,girls=0;
    printf("Enter sex code\n");
    for(int i=1; i<=50;i++){
    scanf(" %c", &sex);
    if(sex=='M' || sex=='m'){
        boys++;
    }
    else{
        girls++;
    }
    }
    printf("Boys:%d Girls:%d\n", boys,girls);
}