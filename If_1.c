#include<stdio.h>
int main()
{
    int a,b;
    printf("�nter first no:");
    scanf("%d", &a);
    printf("�nter second no:");
    scanf("%d", &b);
    if (a<b)
    {
        printf("%d is smaller", a);
    }
    else{
        printf("%d is smaller", b);
        printf("%d is greater", a);
    }
    return 0;

}
