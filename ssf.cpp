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
      	fflush(stdin);
	
	   printf("Idade\n");
       scanf("%d", &idade[i]);	 
    
          
	 }

	
	
	
	for ( i = 0; i < 5; i++){
	printf("Nome  %s\n",i + 1 , nome[i]);
     printf("Idade %d:\n",i + 1 , idade[i]);
     

}  	

	    	
	
	
        return 0;	
 	 }
