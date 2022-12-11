#include<stdio.h>

int is_lower(char c){ // kiem tra 1 ki tu co phai la chu in thuong hay khong. Neu dung tra ve 1, sai tra ve 0
	if(c>'a' && c<='z')
	return 1;
	return 0;
}

int is_upper(char c){ // kiem tra 1 ki tu co phai la chua in hoa hay khong
	if(c>='A' && c<='Z')
	return 1;
	return 0;
}

int is_alpha(char c){ // kiem tra 1 ki tu co phai la chu cai hay khong
	if(c>'a' && c<='z' || c>='A' && c<='Z')
	return 1;
	return 0;
}

int is_digit(char c){ // kiem tra 1 ki tu co phai la ki tu hay khong
	if(c>='0' && c<='9')
	return 1;
	return 0;
}

char to_lower(char c){ // tra ve dang in thuong cua ki tu c
	if(c>='A' && c<='Z'){
		c += 32;
	}
}

char to_upper(char c){ // tra ve dang in hoa cua ki tu c
	if(c>='a' && c<='z'){
		c -= 32;
	}
}

int strlen(char c[]){ // tra ve chieu dau xau
	int cnt = 0;
	while(c[cnt]!='\0'){
		++cnt;
	}
	return cnt;
}

char* strlwr(char c[]){ // viet thuong tat ca cac ki tu trong xau
	for(int i = 0; i<strlen(c); i++){
		if(c[i]>='A' && c[i] <= 'Z'){
			c[i] += 32;
		}
	}
	return c;
}

char* strupr(char c[]){ // viet hoa tat ca cac ki tu trong xau
	for(int i = 0; i < strlen(c); i++){
		c[i] = to_upper(c[i]);
	}
	return c;
}

int min(int a, int b){
	return a<b?a:b;
}

int strcmp(char c[], char d[]){ // so sanh 2 xau a va b theo thu tu tu dien, neu a > b tra ve 1, a = b tra ve 0, a < b tra ve -1
	int n1 = strlen(c);
	int n2 = strlen(d);
	for(int i = 0; i<min(n1,n2);i++){
		if(c[i]!=d[i]){
			if(c[i]>d[i]) return 1;
			else return -1;
		}
	}
	if (n1==n2)
	return 0;
	else if(n1<n2) return -1;
	else return 1;
}

int strcmpi(char c[], char d[]){ // so sanh 2 xau a va b theo thu tu tu dien khong phan biet hoa thuong, neu a > b tra ve 1, a = b tra ve 0, a < b tra ve -1
	int n1 = strlen(c);
	int n2 = strlen(d);
	strlwr(c);
	strlwr(d);
	for(int i = 0; i<min(n1,n2);i++){
		if(c[i]!=d[i]){
			if(c[i]>d[i]) return 1;
			else return -1;
		}
	}
	if (n1==n2)
	return 0;
	else if(n1<n2) return -1;
	else return 1;
}

long long atoll(char c[]){ // chuyen 1 xau ki tu so thanh so nguyen long long
	long long res = 0;
	for (int i = 0; i<strlen(c);i++){
		res = res * 10 + c[i] -'0';
	}
	return res;
}

char* strrev(char c[]){ // viet ham dao nguoc 1 xau
	int l = 0, r = strlen(c) - 1;
	while(l<r){
		char tmp = c[l];
		c[l] = c[r];
		c[r] = tmp;
		++l;
		--r;
	}
	return c;
}

int main(){
	char c[100], d[100];
	gets(c);
	gets(d);
	printf("%s", strrev(c));
}
