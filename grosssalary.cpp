#include<stdio.h>

int main(){
	float salary,hra,da,ta;
	x:
		printf("salary amt:  ");
		scanf("%f",&salary);
		hra=salary*10/100;
		da=salary*5/100;
		ta=salary*8/100;
		salary=salary+hra+ta+da;
		printf("Gross Salary=%f\n",salary);
		printf("\n");
	goto x;
	
}
