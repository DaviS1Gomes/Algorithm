
#include<stdio.h>
int main()
{
            float valorA, valorB, valorC;
            scanf("%f %f %f", &valorA, &valorB, &valorC);
            if (valorA+valorB > valorC && valorB+valorC > valorA && valorA+valorC > valorB)
            {
                printf("Perimetro = %.1f\n", valorA + valorB + valorC);
            }
            else{
                printf("Area = %.1f\n", (valorA + valorB)*valorC/2);
            }
            return 0;
    }
