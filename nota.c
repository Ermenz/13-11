#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {
 float nota[3];
 int i;

for ( i = 0; i < 3; i++)
{
    printf("Nota %d:", i + 1);
    scanf("%d",&nota[i]);
}

for ( i = 0; i < 3; i++)
{
    printf("Nota %d:", i + 1, nota[i]);
}


    return 0;
}