# include <stdio.h>
 
int fuzzyStrcmp(char s[], char t[]){
	//関数の中だけを書き換えてください
	//同じとき１を返す，異なるとき０を返す
    int i;
    char a, b;

    for(i = 0; s[i] != '\0' && t[i] != '\0'; i++) {
        a = s[i];
        b = t[i];

        if ("A" <= a && a <= "Z") {
            a += 32;
        }
        if ("A" <= b && b <= "Z") {
            b += 32;
        }

        if (a != b) {
            return 0;
        }
    }
    if (s[i] == '\0' && t[i] == '\0') {
        return 1;
    } else {
        return 0;
    }
}
 
//メイン関数は書き換えなくてできます 
int main(){
    int ans;
    char s[100];
    char t[100];
    scanf("%s %s",s,t);
    printf("%s = %s -> ",s,t);
    ans = fuzzyStrcmp(s,t);
    printf("%d\n",ans);
    return 0;
}