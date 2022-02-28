#include<math.h>
#include<stdio.h>

int main()
{
    int valor1, valor2, valor3, valor4;
    float valorA, valorB, resultado;

        scanf("%d %d %f", &valor1,&valor2,&valorA);
        scanf("%d %d %f", &valor3,&valor4,&valorB);

        resultado = (valor2*valorA)+(valor4*valorB);

        printf("VALOR A PAGAR: R$ %.2f", resultado);
    return 0;
}
