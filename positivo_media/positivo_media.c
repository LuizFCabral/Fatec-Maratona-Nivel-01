#include <stdio.h>
 
int main() {
 	float val[6], positivo[6];
 	int i, numP=0;
	float soma=0, media=0;
 	
 	for(i=0;i<6;i++){
 		scanf("%f",&val[i]);
 		if(val[i]>0){
 			numP++;
 			positivo[numP-1]=val[i];
		 }
	 }
	
	for(i=0;i<numP;i++){
		soma+= positivo[i];
	}
	media=soma/numP;
	
	printf("%d valores positivos\n%.1f\n",numP,media);
			
    return 0;
}