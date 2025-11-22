#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    for(int i = 0; i<n; i++){

        int m1, m2, d, result = 0;
        scanf("%d %d %d",&m1, &m2, &d);

        result = m1*d/(m1+m2);
        int finalResult = d - result;
        printf("%d\n", finalResult);
    }
    return 0;
}