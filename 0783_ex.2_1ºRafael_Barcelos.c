#include <stdio.h>

int main(void){
    int anos = 0;
    int meses = 0;
    int   dias = 0;
    float diastot = 0;

    printf("Insira a sua idade em anos. ");
    scanf(" %d", &anos);

    printf("Insira a sua idade em meses. ");
    scanf(" %d", &meses);

    printf("Insira a sua idade em dias. ");
    scanf(" %d", &dias);

    anos = anos * 365.25;
    meses = meses * 12;

    diastot = dias + anos + meses;
    
    printf("O total de é %.2f dias.\n", diastot);


    return 0;

    










}