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
    int evan = 0;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {

        if (A[i] % 2 == 0)
        {
            evan++;
        }
        if (A[i] % 2 == 1)
        {
            odd++;
        }
    }

    printf("%d %d", evan, odd);

    return 0;
}