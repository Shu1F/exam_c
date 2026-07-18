#include <stdio.h>

int main(void) {
    char s[1024];
    int i = 0;
    int len = 0;
    scanf("%s", s);

    while(s[i] != '\0') {
        i++;
        len++;
    }
    printf("%d", len);
}