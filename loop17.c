#include <stdio.h>
int main()
{
    int i, num, positive = 0, negative = 0, zeros = 0;
    printf("Enter 200 numbers\n");
    for (i = 1; i <= 200; i++)
    {
        printf("Number %d\n", i);
        scanf("%d", &num);
        if (num > 0)
        {
            positive++;
        }
        else if (num < 0)
        {
            negative++;
        }
        else
        {
            zeros++;
        }
    }
        printf("Positive numbers :%d\n", positive);
        printf("Negative numbers :%d\n", negative);
        printf("Zeros are :%d\n", zeros);
    
} 