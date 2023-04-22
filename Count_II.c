#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    scanf("%s", a);

    int total = 0;
    for (int i = 0; i <= strlen(a); i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            total++;
        }
    }
    printf("%d", total);

    return 0;
}