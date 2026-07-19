// # include <stdio.h>

// int main() {
//     int n;
//     int num[1024];
//     int i, j, k;

//     scanf("%d", &n);

//     for(i=0; i<n; i++) {
//         scanf("%d", &num[i]);
//     }
    
//     for(j=0; j<n; j++) {
//         for(k=0; k<n-1; k++) {
//             if(num[k] > num[k+1]) {
//                 int tmp = num[k];
//                 num[k] = num[k+1];
//                 num[k+1] = num[k];
//             }
//         }
//     }
//     for(i=0; i<n; i++) {
//         printf("%d", num[i]);
//     }

//     return 0;
// }