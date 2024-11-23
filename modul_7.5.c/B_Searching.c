#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int A[n];
    long long int X;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &A[i]);
    }

    scanf("%lld", &X);

    for (int i = 0; i < n; i++)
    {
        if (A[i] == X)
        {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("%d\n", -1);

    return 0;
}