#include<stdio.h>
#include<math.h>

int nt(int n){
	for(int i=2; i<=sqrt(n); i++){
	if(n%i==0)
	return 0;
	}
	return n>1;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n], b[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(nt(a[i]))
		b[cnt] = a[i];
		++cnt;
	}
	printf("%d ", cnt);
//	for(int i = 0; i < cnt; i++){
//		printf("%d ", b[i]);
//	}
}
