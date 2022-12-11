#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
// Dem so lan xuat hien cua cac ki tu trong xau chi gom cac chu in thuong(in Hoa), Phut 7
//a: 97 -> 0
//b: 98 -> 1
//c: 99 -> 2
//...
//z: 122 -> 25

//A: 65 -> 0
//Z: 90 -> 25

int main(){
	char c[1005];
	scanf("%s", c);
	int cnt[26] = {0};
	for (int i = 0; i < strlen(c); i++){
		cnt[c[i]-'A']++; // 'A'
	}
	for(int i = 0; i < 26; i++){
		if(cnt[i]!=0){
			printf("%c %d\n", (i+'A'), cnt[i]); // 'A'
		}
	}
}
//
//// Theo thu tu tu dien
int main(){
	char c[1005];
	gets(c);
	int cnt[256] = {0};
	for(int i = 0; i < strlen(c); i++){
		cnt[(int)c[i]]++;
	}
	for(int i = 0; i < 256; i++){
		if(cnt[i]!=0){
			printf("%c %d\n",i,cnt[i]);
		}
	}
}

//// Theo thu tu xuat hien
int main(){
	char c[1005];
	scanf("%s",c);
	int cnt[26]={0};
	for(int i = 0; i < strlen(c); i++){
		cnt[c[i]-'a']++;
	}
	for(int i = 0; i < strlen(c); i++){
		if(cnt[c[i]-'a']){
			printf("%c %d\n", c[i], cnt[c[i]-'a']);
			cnt[c[i]-'a'] = 0;
		}
	}
}
