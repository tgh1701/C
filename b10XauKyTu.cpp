#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

// Nhap vao mot xau ki tu va chuyen cac ki tu trong xau thanh ki tu in thuong Input
int main(){
	char c[1005];
	gets(c);
//	fgets(c, 1005, stdin)
//	for(int i = 0; i < strlen(c); i++){
//		c[i] = tolower(c[i]);
//	}
//	printf("%s", c);
	strlwr(c);
	printf("%s", c);
}
