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

int main(void) {
    char s[1024];
    char t[1024];
    int i;
    int len = 0;

    scanf("%s", s);

    i = 0;
    while(s[i] != '\0'){
        i++;
        len++;
    }

    for(i = 0; i < len; i++) {
        t[i] = s[i];
    }

    printf("%s", t);
}