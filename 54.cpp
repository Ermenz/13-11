#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {
	
	setlocale(LC_ALL, "portuguese");  
	
	
	float numeros[10];
	int i;
	int quantidadenegativo = 0;
	float soma = 0;
	
	for (i = 0; i < 10; i++) {
     	  printf("Numeros\n");
       scanf("%f", &numeros[10]);	 
    
     if (numeros[i] < 0) 
	  {
     	quantidadenegativo++;
	  } if (numeros[i] > 0)  
	  {
     	soma+=numeros[i];
	  }
	 
	 }
	 
	  for ( i = 0; i < 10; i++){ 
	     printf("Numero: %f:\n", numeros[i]);	
	}
	 
	 printf("Quantidade de n�meros negativos %d:\n",quantidadenegativo );	
	 printf("Soma dos n�meros positivos %f:\n", soma);	
	 
	return 0;
	}
