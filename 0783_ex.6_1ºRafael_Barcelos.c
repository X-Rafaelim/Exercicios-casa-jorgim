#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{

    float salario_minimo = 0.0;
    float folha_mensal = 0.0;
    float salario = 0.0;
    float maior_salario = 0.0;
    float media = 0.0;

    int numero_total_pecas = 0;
    int pecas = 0;
    int total_homens_a = 0;
    int total_homens_b = 0;
    int total_homens_c = 0;
    int total_mulher_a = 0;
    int total_mulher_b = 0;
    int total_mulher_c = 0;
    int total_peca_homens_a = 0;
    int total_peca_homens_b = 0;
    int total_peca_homens_c = 0;
    int total_peca_mulher_a = 0;
    int total_peca_mulher_b = 0;
    int total_peca_mulher_c = 0;

    char nome[50]; 
    char sexo;
    char resposta;
    char operario_maior_salario[50]; 

    printf("Informe o salario minimo:");
    scanf("%f", &salario_minimo);

    do
    {

        printf("Nome do funcionario: ");
        fflush(stdin); 
        scanf("%s", nome); 
        printf("Pecas fabricados no mes: ");
        fflush(stdin); 
        scanf("%d", &pecas);
        printf("Sexo do funcionario: ");
        fflush(stdin);
        scanf("%c", &sexo);

        numero_total_pecas = numero_total_pecas + pecas;

      
        if ( pecas <= 30 )
        {

            salario = salario_minimo;

            if ( sexo == 'M' || sexo == 'm' )
            {
                total_homens_a = total_homens_a + 1;
                total_peca_homens_a = total_peca_homens_a + pecas;
            }
            else
            {

                total_mulher_a = total_mulher_a + 1;
                total_peca_mulher_a = total_peca_mulher_a + pecas;
            }

        }
        else
        {

            
            if ( pecas >= 31 && pecas <= 35 )
            {

                salario = salario_minimo + ( pecas - 30 ) * (0.03 * salario_minimo);

                if ( sexo == 'M' || sexo == 'm' )
                {
                    total_homens_b = total_homens_b + 1;
                    total_peca_homens_b = total_peca_homens_b + pecas;
                }
                else
                {
                    total_mulher_b = total_mulher_b + 1;
                    total_peca_mulher_b = total_peca_mulher_b + pecas;
                    salario = salario_minimo + pecas * (0.05 * salario_minimo);
                }

            }
            else
            {

                
                salario = salario_minimo + ( pecas - 30 ) * (0.05 * salario_minimo);

                if ( sexo == 'M' || sexo == 'm' )
                {
                    total_homens_c = total_homens_c + 1;
                    total_peca_homens_c = total_peca_homens_c + pecas;
                }
                else
                {
                    total_mulher_c = total_mulher_c + 1;
                    total_peca_mulher_c = total_peca_mulher_c + pecas;
                }

            }
        }

        folha_mensal = folha_mensal + salario;

        if ( salario > maior_salario )
            strcpy(operario_maior_salario, nome); 

        printf("Salario do funcionario: %f\n", salario);

        printf("Deseja inserir novos dados? S - Sim ou N - Nao: ");
        fflush(stdin); 
        scanf("%c",&resposta);

    }
    while ( resposta != 'N' && resposta != 'n' ); 

    printf("Folha mensal de pagamentos: %f\n", folha_mensal);
    printf("Total de pecas fabricadas no mes: %d\n", numero_total_pecas );

    media = 0.0;
    if ( total_homens_a > 0)
        media = (total_peca_homens_a / total_homens_a);
    printf("Media de pecas de homens da classe A: %f\n", media ); 

    media = 0.0;
    if ( total_homens_b > 0)
        media = (total_peca_homens_b / total_homens_b);
    printf("Media de pecas de homens da classe B: %f\n", media ); 

    media = 0.0;
    if ( total_homens_c > 0)
        media = (total_peca_homens_c / total_homens_c);
    printf("Media de pecas de homens da classe C: %f\n", media ); 

    media = 0.0;
    if ( total_mulher_a > 0)
        media = (total_peca_mulher_a / total_mulher_a);
    printf("Media de pecas de mulheres da classe A: %f\n", media ); 

    media = 0.0;
    if ( total_mulher_b > 0)
        media = (total_peca_mulher_b / total_mulher_b);
    printf("Media de pecas de mulheres da classe B: %f\n", media ); 

    media = 0.0;
    if ( total_mulher_c > 0)
        media = (total_peca_mulher_c / total_mulher_c);
    printf("Media de pecas de mulheres da classe C: %f\n", media ); 

    printf("Operario com o maior salario da empresa: %s\n", operario_maior_salario); 
}
    