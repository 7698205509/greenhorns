#include<stdio.h>

int main(){
	
	float c,f;
	x:
	printf("value of celsius: ");
	scanf("%f",&c);
	f=c*9/5+32;
	printf("f=%f\n",f);
	printf("\n");
	goto x;
}
