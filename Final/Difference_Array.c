#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int ar[n];
        int ar2[n];
        int ar3[n];

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ar[j]);
        }

        for(int k = 0; k<n; k++){
            ar2[k] = ar[k];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (ar2[i] > ar2[j])
                {
                    int temp = ar2[i];
                    ar2[i] = ar2[j];
                    ar2[j] = temp;
                }
            }
        }

        for(int l = 0; l<n; l++){
            ar3[l] = abs(ar[l] - ar2[l]);
            printf("%d ", ar3[l]);
        }
        printf("\n");
    }
    return 0;
}