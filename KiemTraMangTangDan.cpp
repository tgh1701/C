#include<stdio.h>
#include<math.h>

int check(int a[], int n){
	for(int i=0;i<n-1;i++){
		if(a[i]>=a[i+1])
		return 0;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(check(a,n))
	printf("YES\n");
	else printf("NO\n");
}
