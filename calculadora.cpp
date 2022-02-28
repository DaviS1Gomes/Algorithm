#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char start;
    int opcao;
    double valorA, ValorB;

        printf("Start The Game? (Y/N)\n");
            scanf("%c", &start);
        
        if(start == 'Y' || start == 'y')
        {
            do
            {
                system("cls");
                    printf("(Calculadora simples) Escolha opcao:\n");
                    printf("1. Adicao\n");
                    printf("2. Subtracao\n");
                    printf("3. Multiplicacao\n");
                    printf("4. Divisao\n");
                    printf("5. Fecha Calculadora\n");

                        scanf("%d", &opcao);

                switch (opcao)
                {
                case 1:
                    printf("Digite os dois valores: \n");
                        scanf("%lf %lf", &valorA, &ValorB);
                    printf("Resultado e %.2lf\n", valorA + ValorB);
                    system("pause");
                    break;
               case 2:
                    printf("Digite os dois valores: \n");
                        scanf("%lf %lf", &valorA, &ValorB);
                    printf("Resultado e %.2lf\n", valorA - ValorB);
                    system("pause");
                    break;
               case 3:
                    printf("Digite os dois valores: \n");
                        scanf("%lf %lf", &valorA, &ValorB);
                    printf("Resultado e %.2lf\n", valorA * ValorB);
                    system("pause");
                    break;
               case 4:
                    printf("Digite os dois valores: \n");
                        scanf("%lf %lf", &valorA, &ValorB);
                    printf("Resultado e %.2lf\n", valorA / ValorB);
                    system("pause");
                    break;
                case 5:
                    return 1;
                    break;
                default:
                    printf("Error");
                    break;
                }
                
            } while (start == 'Y' || start == 'y');
        
        }
            else if (start == 'N' || start == 'n'){
                system("Pause");
                printf("Obrigado por jogar!\n");
                return 1;
            }
            else{
                return 1;
            }
    return 0;
}
