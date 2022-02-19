#include<stdio.h>
#include<math.h> 

int main()
{
    double A, B, C, Delta, Resultado1, Resultado2;
        scanf("%lf %lf %lf", &A, &B, &C);
    
    Delta = (B*B) - 4 * A * C;

        if ( Delta > 0 && A != 0)
       {
            Resultado1 = ((-B) + sqrtl(double(Delta)))/(2*A);
            printf("R1 = %.5lf\n", Resultado1);

            Resultado2 = ((-B) - sqrtl(double(Delta)))/(2*A);
            printf("R2 = %.5lf\n", Resultado2);
        }
        else{
            printf("Impossivel calcular\n");
        }
    return 0;
}
