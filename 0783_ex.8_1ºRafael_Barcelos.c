#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n = 0;
    char palavra[100];
    int counter = 0;

    printf("Diga uma palavra\n");
    scanf(" %s", palavra);
    // serve para contar quantos caracters tem a palavra dita pelo utilizador 
    while ((palavra[n]) )
    {
        counter++;
        n++;
    }
    
   // loop para dar check para ver se a palavra é um palindromo 
    for (int i = 0; i < counter / 2; i++)
    {
        if (palavra[i] != palavra[counter - i - 1])
        {
            printf(" Nao e um palindromo\n");
            printf(" %c - %c", palavra[i],  palavra[counter -i-1]);
            printf(" %d", counter -i - 1);
            return;
        }
    }
    printf(" Sim e um palindromo\n");
    printf(" %d", counter);

    return 0;
}