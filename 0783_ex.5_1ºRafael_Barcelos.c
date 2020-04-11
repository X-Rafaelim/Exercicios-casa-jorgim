#include <stdio.h>

int main(){
    int arraySize = 20;
    int aka[arraySize];
    int input;
    int sumPar = 0;
    int sumImp = 0;
    int sumTotal = 0;

    

     for (int i = 0; i < arraySize; i++)
     {
        printf("Diga um numero inteiro\n");
        scanf(" %d", &input);
        aka[i] = input;
        

        if (aka[i] % 2 == 0)
        {
            sumPar = sumPar + aka[i]; 
        }
        else if (aka[i] % 2 != 0)
        {
            sumImp = sumImp + aka[i]; 
        }
        

        
     }

        sumTotal = sumImp - sumPar;

        if (sumTotal < 0)
        {
            printf("Valor abaixo de 0");
        }
        else if (sumTotal == 0)
        {
            printf("Jackpot, vais receber mais um valor");
        }
        else if (sumTotal > 0)
        {
            printf(" %d", sumTotal);
        }




      return 0;
}
