# include<stdio.h>
# include<stdlib.h>

// int main () {
//     int n;
//     int i;

//     scanf("%d", &n);
//     int *a;

//     a = (int *)malloc(sizeof(int) * n);

//     if(a == NULL) {
//         printf("ERROR\n");
//         return 0;
//     }

//     for(i=0; i<n; i++) {
//         a[i] = i + 1;
//     }

//     for(i=0; i<n; i++) {
//         printf("%d", a[i]);
//     }
//     free(a);
// }

// int main() {
//     char s[1024];
//     int i = 0;
//     int j;
//     int len = 0;
//     char *a;

//     scanf("%s", s);

//     while(s[i] != '\0') {
//         i++;
//         len++;
//     }

//     a = (char *)malloc(sizeof(char) * (len + 1));

//     for(j=0; j < len; j++) {
//         a[j] = s[j];
//     }
//     a[len] = '\0';
//     printf("%s\n", a);

//     free(a);

//     return 0;
// }