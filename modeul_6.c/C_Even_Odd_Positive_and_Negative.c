#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a;
    int even = 0, Odd = 0, positive = 0, neg = 0;
    for (int i = 1; i <= n; i = i + 1)
    {
        scanf("%d", &a);
        if (a%2 == 0)
        {
            even++;
        }
        else
        {
            Odd++;
        }
         if (a > 0)
        {
            positive++;
        }
        else if (a < 0)
        {
            neg++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, Odd, positive, neg);
    printf("\n");

    return 0;
}