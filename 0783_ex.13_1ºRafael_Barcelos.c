#include <stdio.h>

int main(void){
    int n;
    int u = 0;
    int a = 0;
    int aray[n];
    int soma;
    int maior = 0;

    printf("Diga um valor\n");
    scanf(" %d", &n);
    // faz a soma e da valores aleatorios as posições do array
    for (int i = 0; i < n; i++)
    {
        aray[i] = rand() %10;
        soma = soma + aray[i];
        printf(" %d ,", aray[i]);
        u++;

        if (aray[i] > maior)
        {
            maior = aray[i];
            a = u;

        }
        


    }
    //mostra au utilizador numero maior e a posição
    printf("\nO maior é %d  e ele fica na posicao %d", maior, a);
    return 0;
    
}