#include <stdio.h>
 
int main() {
 
    int n, i;
    float valM[3];
    
    scanf("%d", &n);
    
    float medP[n];
    
    for(i=0;i<n;i++){
    	scanf("%f %f %f",&valM[0], &valM[1], &valM[2]);
    	medP[i] = (valM[0]*2 + valM[1]*3 + valM[2]*5)/10;
	}
	
	for(i=0;i<n;i++){
		printf("%.1f\n",medP[i]);
	}
	
    return 0;
}
