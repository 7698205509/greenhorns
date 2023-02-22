#include<stdio.h>

int main(){
	
	int a=10;
	int b=20;
	b=a;
	a=a+b;
	          //a=10   b=10
	printf("b=%d\n",b);
	printf("a=%d",a);
}
