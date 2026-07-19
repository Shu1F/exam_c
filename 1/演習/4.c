# include <stdio.h>

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

// int main() {
//     int n;
//     int num[1024];
//     int i, j;
//     int min;
//     int tmp;

//     scanf("%d", &n);

//     for(i=0; i<n; i++){
//         scanf("%d", &num[i]);
//     }

//     for(i=0; i<n-1; i++){
//         min = i;
//         for(j=i+1; j<n; j++){
//             if(num[j] < num[min]) {
//                 min = j;
//             }
//         }
//         tmp = num[i];
//         num[i] = num[min];
//         num[min] = tmp;
//     }
// }

// int main() {
//     int n;
//     int num[1024];
//     int bucket[1024] = {0};
//     int i, j;

//     scanf("%d", &n);

//     for(i=0; i<n; i++) {
//         scanf("%d", &num[i]);
//     }


// }