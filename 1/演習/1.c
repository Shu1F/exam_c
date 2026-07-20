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
//     終端文字が必要
//     t[len] = '\0';

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
//             printf("0\n");
//             return 0;
//         }
//     }
//     // 同時に終端だったら同じ長さなので1を返す
//     if (s[i] == '\0' && t[i] == '\0') {
//         printf("1\n");
//     } else {
//         printf("0\n");
//     }
//     return 0;
// }

// 演習4

// int main(void) {
//     char s[1024];
//     char t[1024];
//     scanf("%s %s", s, t);

//     int i = 0;
//     int len = 0;

//     while(s[i] != '\0') {
//         i++;
//         len++;
//     }

//     int j;

//     for(j = 0; t[j] != '\0'; j++) {
//         s[len + j] = t[j];
//     }
//     s[len + j] = '\0';
//     printf("%s", s);
// }

// 演習5

// int main(){
//     char s[1024];
//     int i;
//     scanf("%s", s);
//     for(i = 0; s[i] != '\0'; i++){
//         if(s[i] >= 'a' && s[i] <= 'z') {
//             s[i] -= 32;
//         }
//     }
//     printf("%s", s);
// }

// int main() {
//     int i = 0;
//     int len;
//     char str[1024];
//     scanf("%s", str);

//     while(str[i] != '\0') {
//         i++;
//         len++;
//     }
//     printf("%d", len);
//     return 0;
// }

// int main() {
//     int i;
//     char s[1024];
//     char t[1024];
//     scanf("%s", s);

//     for(i = 0; s[i] != '\0'; i++) {
//         t[i] = s[i];
//     }
//     t[i] = '\0';
//     printf("%s", t);

//     return 0;
// }

// int main() {
//     int i;
//     char s[1024];
//     char t[1024];

//     scanf("%s %s", s, t);

//     for(i = 0; s[i] != '\0' && t[i] != '\0'; i++) {
//         if(s[i] != t[i]) {
//             printf("0");
//             return 0;
//         }
//     }
//     if(s[i] == '\0' && t[i] == '\0') {
//         printf("1");
//         return 0;
//     } else {
//         printf("0");
//         return 0;
//     }
// }

// int main() {
//     char s[1024];
//     char t[1024];
//     int i, len;

//     scanf("%s %s", s, t);

//     while(s[i] != '\0') {
//         i++;
//         len++;
//     }

//     for(i = 0; t[i] != '\0'; i++) {
//         s[len + i] = t[i];
//     }
//     s[len + i] = '\0';
//     printf("%s", s);
//     return 0;
// }

int main() {
    char s[1024];
    scanf("%s", s);

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'a' || s[i] <= 'z') {
            s[i] -= 32;
        }
    }
    printf("%s", s);
}