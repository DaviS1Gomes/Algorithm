#include <stdio.h>
int main()
{
    float N1, N2, N3, N4, MEDIA, MediaFinal;
        scanf("%f", &N1);
        scanf("%f", &N2);
        scanf("%f", &N3);
        scanf("%f", &N4);

    MEDIA = ((N1*2) + (N2*3) + (N3*4) + (N4*1))/10;
    if (MEDIA >= 5)
    {
        if (MEDIA >= 7)
        {
            printf("Media: %.1f\n", MEDIA);
            printf("Aluno Aprovado.\n");
        }
        else{
            float Exame;
            scanf("%f", &Exame);
            MediaFinal = (Exame + MEDIA)/2;
                if (MediaFinal >= 5.0)
                {
                        printf("Media: %.1f\n", MEDIA);
                        printf ("Aluno em exame.\n");
                        printf("Nota do exame: %.1f\n", Exame);
                        printf( "Aluno aprovado.\n");
                        printf("Media final: %.1f\n", MediaFinal);
            }
                else{
                        printf("Media: %.1f\n", MEDIA);
                        printf ("Aluno em exame.\n");
                        printf("Nota do exame: %.1f\n", Exame);
                        printf( "Aluno Reprovado\n");
                        printf("Media final: %.1f\n", MediaFinal);
            }
            
        }
    }
    else{
        printf("Media: %.1f\n", MEDIA);
        printf("Aluno Reprovado.\n");
    }
    
    return 0;
}

