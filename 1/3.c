#include <stdio.h>

int isPalindrome(char s[]){
	//関数の中だけを書き換えてください
	//回文になっているとき１を返す
	//回文になっていないとき０を返す

    int len = 0;
    while(s[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len; i ++) {
        if (s[i] != s[len - i - 1]) {
            return 0;
        }
    }
}
 
//メイン関数は書き換えなくてよいです
int main(){
    char s[100];
    scanf("%s",s);
    printf("%s -> %d\n",s,isPalindrome(s));
    return 0;
}
 