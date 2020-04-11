#include <stdio.h>
#include <stdlib.h>

int main(void){

int x;
int array[x][x];
int y, colunas;
int random;

printf("Qual é o tamanho do array?\n");
scanf(" %d", &x);

// loop para adicionar valores as variaveis
for(y=0;y<x;y++){

        for(colunas=0;colunas<x;colunas++){

                random=rand() % 15;

                array[y][colunas] = random;

                printf(" %d", array[y][colunas]);

            }

        printf("\n");
    }

return 0;

}