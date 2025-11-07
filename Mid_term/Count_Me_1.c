#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int ar[n];
    int c2 = 0, c3 = 0;

    for(int i =0; i<n; i++){
        scanf("%d",&ar[i]);
        if(ar[i]%2 == 0){
            c2++;
        }
        else if(ar[i]%3 == 0){
            c3++;
        }
    }

    printf("%d %d", c2, c3);
    return 0;
}