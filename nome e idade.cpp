#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {
	
	setlocale(LC_ALL, "portuguese");  
	
	char nome[5] [200];	
	int idade[5];
	int i;
	
	for (i = 0; i < 5; i++) {
	  fflush(stdin);
	  printf("Nome:", i + 1);
      scanf("%s", &nome[i]); 
	    fflush(stdin);
	   printf("Idade\n");
       scanf("%d", &idade[i]);	 
        fflush(stdin);


	 }
	
	
	for ( i = 0; i < 5; i++){
	fflush(stdin);
     printf("Idade %d %d:\n",i + 1 , idade[i]);
   
} 

    for ( i = 0; i < 5; i++){
    fflush(stdin);
    printf("Nome %d: %s\n",i + 1 , nome[i]);
   } 
	
	
	
	
	
        return 0;	
 	 }
