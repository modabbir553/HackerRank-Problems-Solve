#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int k = 0;
    int ar2[n];
    for (int j = n - 1; j >= 0; j--)
    {
        ar2[k] = ar[j];
        k++;
    }

    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i+=2)
        {

            printf("%d ", ar2[i]);
        }
    }
    else{
        for (int i = 1; i < n; i+=2)
        {

            printf("%d ", ar2[i]);
        }
    }

    return 0;
}