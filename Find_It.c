#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int findNum;
    scanf("%d", &findNum);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == findNum)
        {
            sum++;
        }
    }
    printf("%d", sum);
    return 0;
}