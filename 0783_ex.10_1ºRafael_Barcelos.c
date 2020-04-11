#include <stdio.h>


int main() {

int n = 0;
int x = 1;

do {

printf("Insira um numero de 1 a 9: ");
scanf(" %d", &n);

} while (n < 1 || n > 9);

int array[n][n];
//faz o calculo
for (int i = 0; i < n; i++) {
    for(int k = 0; k < n; k++) {                
                                                
        array[i][k] = (x * k + 1 * x);                    
        
        printf("%d ", array[i][k]);
        
    }
 printf("\n");
 x++;
}



return 0;
}