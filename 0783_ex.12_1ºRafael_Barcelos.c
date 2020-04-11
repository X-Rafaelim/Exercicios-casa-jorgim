#include <stdio.h>

int main(void){
    int n;
    int count;
    int num;
    int menor;

    printf("Quantos numeros queres \n");
    scanf(" %d", &n);

    // serve para ver qual o numero mais pequeno 
    for (int count = 0; count < n; count++)
    {
        printf(" Insira um numero\n");
        scanf( " %d", &num);

        if (num < menor)
        {
            menor = num;
        }
        
        
    }
    //mostra qual o menor numero
    printf(" Numero menor inserido foi =  %d", menor);   
}