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
    float menor = 0;

for (i = 0; i < 5; i++) {
	printf("Numero °%d", i + 1);
	scanf("%f", &numero[i]);
	
	if (numero[i] > numero[i] ) {
		numero[i] = maior;
	} 
	
	if (numero[i] < numero[i] ) {
		numero[i] = menor;
	} 
	
	
	for ( i = 0; i < 5; i++)
{
    printf("Numero: %d %.2f:\n",i + 1 , numero[i]);
} 
	
	printf("Maior: %.2f\n", maior);  
	printf("Maior: %.2f\n", menor);  

	
	
	
}





	
	
	
	
	
	
	return 0;
	}
