#include <stdio.h>

int main(void){
    int x = 10;
    int arraylk[x];
    int arraylok[x];
    int conta = 0;
    //da numeros random
    for (int i = 0; i < x; i++)
    {
        arraylk[i] = rand() %10;
        arraylok[i] = rand() %10;
    }
    //faz a conta 
    for (int i = 0; i < x; i++)
    {
        conta = arraylk[i] + arraylok[i];
        printf(" %d + %d = %d",arraylk[i], arraylok[i], conta);
    }
    return 0;
    
}