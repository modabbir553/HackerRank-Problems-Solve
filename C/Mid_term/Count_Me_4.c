#include <stdio.h>
#include <string.h>

int main()
{
    char str[10001];
    scanf("%s", &str);

    int l = strlen(str);
    int fre[26] = {0};
    char alpha[27];
    int v;

    for (int i = 0; i < l; i++)
    {
        v = (int)str[i] - 97;
        fre[v] += 1;
        alpha[v] = str[i];
    }

    for (int j = 0; j < 26; j++)
    {
        if (fre[j] != 0)
        {
            printf("%c - %d\n", alpha[j], fre[j]);
        }
    }
    return 0;
}