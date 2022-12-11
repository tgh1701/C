#include<stdio.h>

int main(){
	int a, b;
	scanf("%f %f", &a, &b);
	if(a==0){
		if(b==0)
		printf("Vo so nghiem");
		else printf("Vo nghiem");
	}
	else printf("%.2f", -b/a);
}
