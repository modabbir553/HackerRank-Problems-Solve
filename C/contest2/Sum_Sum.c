#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int num, Psum = 0, Nsum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);

        if(num > 0){
            Psum += num;
        }
        else{
            Nsum += num;
        }
    }

    printf("%d %d", Psum, Nsum);


    return 0;
}