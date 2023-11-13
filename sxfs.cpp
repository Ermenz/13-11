#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {
	
	setlocale(LC_ALL, "portuguese");  
	
	char nome[200] [5];	
	int idade[5];
	int i;
	
	for (i = 0; i < 5; i++) {
	  printf("Nome:", i + 1);
      scanf("%s", &nome[i]); 
      
	   printf("Idade\n");
       scanf("%d", &idade[i]);	 
    
          
	 }

	
	
	
	for ( i = 0; i < 5; i++){
	printf("Nome  %s\n", nome[i]);
    
}  	
         for ( i = 0; i < 5; i++){ 
	     printf("Idade %d:\n", idade[i]);	
	}
	
        return 0;	
 	 }
