#include <stdio.h>

int main(){

    int num;
    int pop;
    int maior;
    int menor;
    int posicao_menor;

    while(num){    
        printf("Insira algo entre 0 e 5 ou 10 e 15");
        scanf("%d", &pop);

        if(((pop >= 0) && (pop <= 5)) || ((pop >= 10) && (pop <= 15))){
            num = pop;
            break;
        }
    }

    int mynums[num];

    for (int i = 0; i < num; i++){
        mynums[i] = 0;
        while(mynums[i] == 0){
            printf("Insere:");
            scanf("%d", &pop);
            if((pop > 10) && (pop < 100)){
                mynums[i] = pop;
            if(pop > maior)
                maior = pop;
            }
        }
    }

    for(int i = 0; i < num; i++){
        for(int x = 0; x < num; x++){
            
            if(mynums[x] < menor){
                menor = mynums[x];
                posicao_menor = x;
            }

        }
        mynums[posicao_menor] = maior+1;
        printf("%d\n", menor);
        menor = maior+1;
    }
}