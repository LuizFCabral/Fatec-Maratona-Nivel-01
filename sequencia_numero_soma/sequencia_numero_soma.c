#include <stdio.h>
 
int main() {
 
    int m, n, aux, i,soma=0;
    
    scanf("%d %d",&m, &n);
    
    while(m>0&&n>0){	 
    	if(m>n){
	    	aux = m;
	    	m = n;
	    	n = aux;
		}	
		
		for(i=m;i<=n;i++){
			soma+= i;
			printf("%d ",i);
		}
		printf("Sum=%d\n",soma);
		soma=0;
		scanf("%d %d",&m, &n);
	};
    
    
    return 0;
}
