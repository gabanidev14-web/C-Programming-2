#include <stdio.h>
int main()
{

    int n, notprime = 0;
    printf("enter the number: \n");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        notprime = 1;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0 && n != 2)
            {
                notprime = 1;
                break;
            }
        }
    }
    if (notprime)
        printf("%d is not prime\n", n);
    else
        printf("%d is prime\n", n);
}