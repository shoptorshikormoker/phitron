#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    int min = A[0], po = 1;
    for (int i = 0; i < n; i++)
    {
        if (min > A[i])
        {
            min = A[i];
            po = i + 1;
        }
    }
    printf("%d %d\n", min, po);
    return 0;
}