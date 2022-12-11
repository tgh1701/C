#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int check(char c[]){
	int l =0, r = strlen(c)-1;
	while(l<r){
		if(c[l] != c[r])
		return 0;
		++l;
		--r;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[1005];
		scanf("%s", c);
		if(check(c))
		printf("YES\n");
		else
		printf("NO\n");
	}
}
