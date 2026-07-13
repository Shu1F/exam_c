#include <stdio.h>

int strlen(char c[]) {
    int len = 0;
    int i = 0;
    while(c[i] != '\0') {
        len ++;
        i++;
    }
    return len;
}

int isPalindrome(char str[]) {
    int n = strlen(str);

    for(int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    char str[1024];
    scanf("%s", str);
    
    printf("%d", isPalindrome(str));
}