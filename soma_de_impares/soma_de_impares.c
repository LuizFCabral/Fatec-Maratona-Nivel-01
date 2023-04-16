#include <stdio.h>
 
int main() {
 
    int x, y, soma=0, i, aux;
    
    scanf("%d",&x);
    scanf("%d",&y);
    
    if(y>x){
    	aux = x;
    	x = y;
    	y = aux;
	}
    if(y%2==0)
    	i = y+1;
    else
    	i = y+2;
    for(;i<x;i=i+2){
    	soma += i;
	}
	
	printf("%d\n",soma);
    
 
    return 0;
}
