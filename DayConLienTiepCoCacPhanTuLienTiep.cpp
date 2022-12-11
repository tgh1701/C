#include<stdio.h>

long long max(long long a, long long b){
	return a<b? b:a;
}
// In ra day con tang lien tiep dai nhat, dau tien hoac cuoi cung
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int res=0, cnt=1; //// idx
	for(int i=1;i<n;i++){
		if(a[i]!=a[i-1]){ // == lien tiep bang nhau | trai dau a[i]*a[i-1] | tang >
			++cnt;
		}
		else{
			res = max(res, cnt);
			cnt=1;
		} //// if(cnt>res){ |>= cuoi cung
		//// res = cnt;
		//// idx = i-res+1;
			res = max(res, cnt);
	} ////if(res==1) printf("0") else
	printf("%d", res);
	//// for(int i=0;i<res;i++){ printf("%d", a[idx+i]);
}
