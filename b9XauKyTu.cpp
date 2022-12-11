#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

//int islower(char c)
//int isupper(char c)
//int isalpha(char c)
//int isdigit(char c)

//char tolower(char c)
//char toupper(char c)
//int strlen(char c[]) dem so ki tu trong xau
//int strcmp(char c[], char d[]) so sanh theo thu tu tu dien c<d: -1, c=d: 0, c>d: 1
//char* strrev(char c[]) dao nguoc cac ki tu
//char* strlwr(char c[]) tu xay dung, viet thuong tat ca cac ki tu trong xau
//char* stupr(char c[]) viet hoa tat ca cac ki tu trong xau
//char* strcpy(char c[], char d[]) strcpy(c,d) chuyen c -> d
//char* strcat(char c[], char d[]) noi 2 xau voi nhau strcat(c,d)
//int atoi(char c[]) tra ve so int cua xau ban dau
// long long atoll(char c[]) tra ve so long long xau ban dau
int main(){
//	char c = 'Z';
//	c = tolower(c);
//	printf("%c\n",c);
//	char d[100];
//	gets(d);
//	printf("%d\n", strlen(d));
	char a[100], b[100];
	gets(a);
//	gets(b);
//	printf("%d\n", strcmp(a,b));
//	strrev(a);
//	strlwr(a);
//	printf("%s", a);
	long long res = atoll(a);
	printf("%lld", res);
}
