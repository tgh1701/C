#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long a;
		scanf("%d", &a);
		int x;
		x = sqrt(a);
		if(x*x == a)
		printf("YES\n");
		else 
		printf("NO\n");
	}
}
