#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {
	
	setlocale(LC_ALL, "portuguese");
	
	
 float nota[3];
 int i;
 float soma = 0;
 float media;

for ( i = 0; i < 3; i++)
{
    printf("Nota %d:\n", i + 1);
    scanf("%f",&nota[i]);
    soma+= nota[i];
}

for ( i = 0; i < 3; i++)
{
    printf("Nota %d %.2f:\n",i + 1 , nota[i]);
} 
  
  
  media = soma/i;
  printf("Média: %.2f\n", media);  


if (media >= 7) {
	printf("Aprovado\n");
}  else if (media >= 5 ) {
	printf("Recuperação\n");
} else if (media < 5) {
	printf("reprovado\n");
}




    return 0;
}
