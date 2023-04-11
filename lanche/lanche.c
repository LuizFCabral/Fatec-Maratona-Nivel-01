#include <stdio.h>

int main(){
	
	int qnt, cod;
	float total;
	
	scanf("%d %d",&cod,&qnt);
	
	switch(cod){
		case 1:
			total = qnt*4;
			break;
		case 2:
			total = qnt*4.5;
			break;
		case 3:
			total = qnt*5;
			break;
		case 4:
			total = qnt*2;
			break;
		case 5:
			total = qnt*1.5;
			break;
	}
	printf("Total: R$ %.2f\n",total);
	
	return 0;
}