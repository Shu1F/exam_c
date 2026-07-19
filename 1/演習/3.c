# include<stdio.h>
# include<stdlib.h>

int main () {
    int n, x;
    int *a;
    int i;
    int ans = -1;

    scanf("%d %d", &n, &x);

    a = (int *)malloc(sizeof(int) * n);

    if(a == NULL) {
        printf("ERROR\n");
        return 0;
    }

    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++) {
        if(a[i] == x) {
            ans = i;
            break;
        }
    }
    if (ans != -1) {
        printf("a[%d] = %d", ans, a[ans]);
    } else {
        printf("not found");
    }

    free(a);
    return 0;
}