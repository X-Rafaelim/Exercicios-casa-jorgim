//programa em que o utilizador mete uma quantidade x de anos e depois mostra o equivalente desses anos introduzidos em segundos

#include <stdio.h>


int main(void){
    //criação das variáveis 
    int hearthRate = 1;
    int segundos = 60;
    int minutos = 60;
    int horas = 24;
    int dias = 365;
    int meses = 12;
    int anos;
    int calculos;

    //pergunta ao utilizador quantos anos deseja
    printf("Diga quantos anos\n");
    scanf(" %d", &anos);

    //calculos para converter de anos para segundos
    calculos = anos * dias * horas * minutos * segundos;
    
    //mostrar resultado ao utilizador
    printf(" %d\n", calculos);

    return 0;









}

