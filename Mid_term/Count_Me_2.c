#include <stdio.h>
#include <string.h>

int main() {
    char str[100001];
    scanf("%s",&str);
    int c = 0;
    int l = strlen(str);

    for(int i = 0; i<l; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            c++;
        }
    }
    printf("%d", l-c);
    return 0;
}