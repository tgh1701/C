#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void chuanHoa(char c[]){
	c[0] = toupper(c[0]);
	for(int i = 1; i < strlen(c); i++)
	c[i] = tolower(c[i]);
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000], a[20][50];
		int n = 0;
		gets(c);
		char *token = strtok(c, " ");
		while(token != NULL){
			strcpy(a[n], token);
			++n;
			token = strtok(NULL, " ");
		}
		chuanHoa(a[n-1]);
		printf("%s, ", a[n-1]);
		for(int i = 0; i < n-1; i++){
			chuanHoa(a[i]);
			printf("%s", a[i]);
			if(i!=n-2)
			printf(" ");
		}
		printf("\n");
	}
}
