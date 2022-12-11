#include<string.h>
#include<stdio.h>
#include<stdlib.h>
// In ra cac tu
//int main(){
//	int t;
//	scanf("%d", &t);
//	while(t--){
//		char c[1000];
//		gets(c);
//		char *token = strtok(c, " ");
//		while(token != NULL){
//			printf("%s\n", token);
//			token = strtok(NULL, " ");
//		}
//	}
//}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		char *token = strtok(c, " ");
		int cnt = 0;
		while(token != NULL){
			++cnt;
			token = strtok(NULL, " ");
		}
		printf("%d\n", cnt);
	}
}

