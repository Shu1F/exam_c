#include <stdio.h>

int fuzzyStrcmp(char s[],char t[]) {
    char char_s, char_t;
    int i = 0;

    for(i = 0; s[i] != '\0' && t[i] != '\0'; i++) {
        char_s = s[i];
        char_t = t[i];

        if ('A' <= char_s && 'Z' >= char_s) {
            char_s += 32;
        }
        if ('A' <= char_t && 'Z' >= char_t) {
            char_t += 32;
        }

        if (char_s != char_t) {
            return 0;
        }
    }
    if (s[i] == '\0' && t[i] == '\0') {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    char s[1024];
    char t[1024];

    scanf("%s", s);
    scanf("%s", t);

    printf("%d", fuzzyStrcmp(s, t));

    return 0;
}