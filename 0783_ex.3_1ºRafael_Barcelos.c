#include <stdio.h>

int main(void){

    int  inputDays;
    int calcYears = 0;
    int calcMouths = 0;
    int rest = 0;


    printf("Diga sua idade em dias\n");
    scanf(" %d", &inputDays);

    calcYears = inputDays / 365;
    
    rest = inputDays  % 365;
    

    calcMouths = rest / 30;
    rest = rest % 30; 
    printf("ANOS  ::   %d\n", calcYears); 
    printf("MESES ::   %d\n", calcMouths);
    printf("DIAS  ::   %d\n", rest);






    return 0;

}