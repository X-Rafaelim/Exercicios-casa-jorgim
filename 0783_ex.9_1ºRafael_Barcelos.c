#include <stdio.h>
#include <stdlib.h>
int mens(void);

int maximo = 40;
int minimo = 25;
char menu;
int main(){

    
    int numero;
    int random;
    int zero = 0;
    int um = 0;
    int dois = 0;
    int tres = 0;
    int quatro = 0;
    int cinco = 0;
    int seis = 0;
    int sete = 0;
    int oito = 0;
    int nove = 0;
    

    printf("Insira a quanitdade de números que o array terá.\n");
    scanf(" %d", &numero);

    int array[numero];

    if(numero > maximo || numero < minimo){

        printf("Insira um tamanho entre 25 e 40.\n");
        main();
    
    }
    //da valores random ao array
    for(int y = 0; y < numero; y++){

        random = rand() % 10;
        array[y] = random;
        printf("%d, ", array[y]);
    }

    printf(" \n");

    //adiciona numeros para saber quantas vezes um numero se repetiu

    for(int y = 0; y < numero; y++){

        switch (array[y])
        {
        case 0:

            zero++;

            break;
        case 1:

            um++;
            
            break;
        case 2:

            dois++;
            
            break;
        case 3:

            tres++;
            
            break;
        case 4:

            quatro++;
            
            break;
        case 5:

            cinco++;
            
            break;
        case 6:

            seis++;
            
            break;
        case 7:

            sete++;
            
            break;
        case 8:

            oito++;
            
            break;
        case 9:

            nove++;
            
            break;
        
        default:
            break;
        }

    }

    printf("Zero: %d, Um: %d, Dois: %d, Tres: %d, Quatro: %d, Cinco: %d, Seis: %d, Sete: %d, Oito: %d, Nove: %d\n", zero, um, dois, tres, quatro, cinco, seis, sete, oito, nove);
    
    mens();

}

// menu 
int mens(void){

    printf("Press q para sair\n");
    printf("Press r para recomeçar\n");
    printf("Press m para da um novo minimo e maximo\n");
    scanf(" %c", &menu);

    if (menu == 'q' || menu == 'Q')
    {
        return;
    }
    else if (menu == 'r' || menu == 'R' ) 
    {
        main();
    }
    else if (menu == 'm' || menu == 'M')
    {
        printf("Diga um novo minimo\n");
        scanf(" %d", minimo);
        printf("Diga um novo max\n");
        scanf(" %d", maximo);
        mens();
    }
}