#include <stdio.h>

int main(void) {
    char str[1024];
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == '1') {
            str[i] = 'I';
        }
    }
    printf("%s", str);
}
