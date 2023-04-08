#include <stdio.h>
 
int main() {
    double valor, aux=0, vetValores[12] = {100,50,20,10,5,2,1,0.50,0.25,0.10,0.05,0.01};
    int vetNotasMoedas[12] = {0}, i=0;
    scanf("%lf",&valor);
    
    
    while(aux + 0.01 <= valor){
    		while(aux + vetValores[i] <= valor){
				vetNotasMoedas[i]++;
				aux+= vetValores[i];
				if(aux>0.15 && aux < 0.17){
					vetNotasMoedas[i+1]++;
				}
			}
			i++;
	}
	
	puts("NOTAS:");
	for(i=0; i<6; i++){
		printf("%d nota(s) de R$ %.2lf\n", vetNotasMoedas[i], vetValores[i]);
	}
	puts("MOEDAS:");
	for(i=6;i<12;i++){
		printf("%d moeda(s) de R$ %.2lf\n", vetNotasMoedas[i], vetValores[i]);
	}
	
    return 0;
}
