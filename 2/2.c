#include <stdio.h>
#include <stdlib.h>

int myStrlen(char s[]){
    int i;
    for(i=0;s[i]!='\0';i++);
    return i;
}

// 関数の中でtmpに対してmallocして
// そこに回文を代入してreturnで返しましょう
char *setPalindrome(char s[]){
	char *tmp;
    int len = myStrlen(s);
    int i;

    tmp = malloc(sizeof(char) * (len * 2 + 1));

    for(i = 0; i < len; i++) {
        tmp[i] = s[i];
    }

    for(i = 0; i < len; i++) {
        tmp[len + i] = s[len - 1 - i];
    }

    tmp[len * 2] = '\0';

    return tmp;
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
