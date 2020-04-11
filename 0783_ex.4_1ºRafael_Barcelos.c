#include <stdio.h>
#include <stdlib.h>


int main(void){
    int input;
    int random = rand() % 10 + 10;
    int sum = 0;
    int number = 0;
    


    printf("Diga o tamanho do array\n");
    scanf(" %d", &input);
    int pop[input];

    for (int i = 0; i < input; i++)
    {
        random = rand() % 10 + 10;
        printf(" %d -", random);
        sum = sum + random;


    }

    if (sum > 100)
    {
        number = sum - 100;
    }
    
    printf("\nTotal e %d", number);
    return 0;

    
}
