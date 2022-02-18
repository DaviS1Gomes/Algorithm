#include<stdio.h>


    int main()
        {
            float Numero;
                scanf("%f", &Numero);
                if ( 25 >= Numero && Numero >= 0)
                {
                    printf("Intervalo [0,25]\n");
                }
                else if ( 50 >= Numero && Numero > 25){
                    printf("Intervalo (25,50]\n");
                }
                else if ( 75 >= Numero && Numero > 50){
                    printf("Intervalo (50,75]\n");
                }
                else if ( 100 >= Numero && Numero > 75){
                    printf("Intervalo (75,100]\n");
                }
                else{
                    printf("Fora de intervalo\n");

                
            }
            
            return 0;
        }
