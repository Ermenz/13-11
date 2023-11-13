#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	float numero[5];
    int i;
    float maior = 0;
    float menor = 99999 ;

for (i = 0; i < 5; i++) {
	printf("Numero %d\n", i + 1);
	scanf("%f", &numero[i]);	 
	
	if (numero[i] > maior ) {
		maior = numero[i];
	} 
	
	if (numero[i] < menor ) {
		menor = numero[i];
	} 
	
	} 
	
	for ( i = 0; i < 5; i++){
    printf("Numero: %d %.1f:\n",i + 1 , numero[i]);
} 
	
	printf("Maior: %.2f\n", maior);  
	printf("Menor: %.2f\n", menor);  

	
	
	return 0;
}

