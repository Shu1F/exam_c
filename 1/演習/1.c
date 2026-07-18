#include <stdio.h>

// 演習１

// int main(void) {
//     char s[1024];
//     int i = 0;
//     int len = 0;
//     scanf("%s", s);

//     while(s[i] != '\0') {
//         i++;
//         len++;
//     }
//     printf("%d", len);
// }


// 演習２

// int main(void) {
//     char s[1024];
//     char t[1024];
//     int i;
//     int len = 0;

//     scanf("%s", s);

//     i = 0;
//     while(s[i] != '\0'){
//         i++;
//         len++;
//     }

//     for(i = 0; i < len; i++) {
//         t[i] = s[i];
//     }

//     printf("%s", t);
// }

// 演習3

// int main() {
//     int i;

//     char s[1024];
//     char t[1024];

//     scanf("%s %s", s, t);

//     for(i = 0; s[i] != '\0' && t[i] != '\0'; i++) {
//         if (s[i] != t[i]){
//             return 0;
//         }
//     }
//     // どちらかが最終文字でない可能性を考慮（どちらかの文字列が長い可能性）
//     if (s[i] == '\0' || t[i] == '\0') {
//         return 0;
//     }
//     return 1;
// }

// 演習4

int main(void) {
    char s[1024];
    char t[1024];

    int i = 0;
    int len = 0;

    while(s[i] != '\0') {
        i++;
        len++;
    }

    int j;

    for(j = 0; t[j] != '\0'; j++) {
        s[len + j] += t[j];
    }
    printf("%s", s);
}