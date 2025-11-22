#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d",&n);

    for(int i = 0; i<n; i++){
        
        char str[10001];
        scanf("%s",&str);
        int l = strlen(str);
        int c1 = 0, c2 = 0, c3 = 0;

        for(int j = 0; j<l; j++){
            if(str[j] >= 'A' && str[j] <= 'Z'){
                c1++;
            }
            else if (str[j] >= 'a' && str[j] <= 'z'){
                c2++;
            }
            else if(str[j] >= '0'){
                c3++;
            }
        }
        printf("%d %d %d\n", c1, c2, c3);
    }
    return 0;
}