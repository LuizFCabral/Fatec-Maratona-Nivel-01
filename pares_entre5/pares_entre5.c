#include <stdio.h>
 
int main() {
 
    int val[5], i, numP = 0;
    
    for(i=0; i<5; i++){
    	scanf("%d",&val[i]);
    	if(val[i] % 2 == 0)
    		numP++;
	}
	
	printf("%d valores pares\n",numP);
 
    return 0;
}
