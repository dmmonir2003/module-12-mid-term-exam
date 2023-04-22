#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000]; // size diclaiar korta hoba

    scanf("%s", &s);
    int small = 0;
    int capital = 0;
    for (int i = 0; i <= strlen(s); i++)
    {
        int value = s[i];
        if (value >= 65 && value < 97)
        {
            capital++;
        }

        if (value >= 97 && value < 123)
        {
            small++;
        }
    }

    printf("%d %d", capital, small);

    return 0;
}