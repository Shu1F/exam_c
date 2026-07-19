#include <stdio.h>
#include <stdlib.h>
 
//この関数を実装する
int binary_search(int a[],int n,int x){
	int lef, rig, mid;
}
 
int main(void) {
	int n,x,i;
	int *a;
	int ans = -1;
	scanf("%d %d",&n,&x);
	a = (int*)malloc(sizeof(int)*n);
	if(a==NULL){
		printf("ERROR\n");
		return -1;
	}
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	ans = binary_search(a,n,x);
	if(ans != -1) printf("a[%d] = %d\n",ans,a[ans]);
	else printf("not found\n");
	free(a);
	return 0;
}