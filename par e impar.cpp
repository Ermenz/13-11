#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {
	
	setlocale(LC_ALL, "portuguese");

int numero[10];
int par = 0;
int impar = 0;
int i;


   for (i = 0; i < 10; i++) {
	printf("Numero %d\n", i + 1);
	scanf("%d", &numero[i]);	 
	
	if (numero[i] % 2 == 0 ) {
		par++;
	} 
	
	if (numero[i] % 2 != 0) {
		impar++;
	} 
	
	} 
	
	
	
	for ( i = 0; i < 10; i++){
    printf("Numero: %d %d:\n",i + 1 , numero[i]);
} 
	printf("Quantidadede pares: %d  \n", par);
    printf("Quantidadede impares: %d  \n", impar);
	
	
	return 0;
	}
