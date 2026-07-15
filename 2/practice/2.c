#include <stdio.h>
#include <stdlib.h>

int strlen(char str[]) {
    int len = 0;
    while(str[len]!='\0') {
        len++;
    }
    return len;
}

int setPalindrome(char s[]) {
    int i;
    int len = strlen(s);
    char *palindrome = malloc(sizeof(char) * (len * 2 + 1));

    for(i=0; i<len; i++){
        palindrome[i] += s[i];
    }
    for(i=0; i<len; i++){
        palindrome[len + i] += s[len - i - 1];
    }

    palindrome[len * 2] = '\0';
    return palindrome;
}


//メイン関数はいじる必要はありません
int main(){
    int i;
    char nyuryoku[1024]; //入力
    char *kaibun;   //回文を受け取る
    scanf("%s",nyuryoku);
    kaibun = setPalindrome(nyuryoku);
    printf("%s\n  -> %s\n",nyuryoku,kaibun);
    free(kaibun);
    return 0;
}