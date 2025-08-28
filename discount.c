#include<stdio.h>
int main()
{
    float ns,gs,dis;
    printf("enter the gross sales:\n");
    scanf("%f", &gs);
    if(gs>20000){
        dis=0.15*gs;
        ns=gs-dis;
    }
    else if(gs>10000){
        dis=.10*gs;
        ns=gs-dis;
    }
    else{
        dis=0.05*gs;
        ns=gs-dis;
    }
    printf("Net sales is %f\n", ns);
    printf("Discount is %f\n", dis);
}