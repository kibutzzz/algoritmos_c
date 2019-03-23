#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ga, gb;
    printf("Digite as notas do GA e GB respectivamente: ");
    scanf("%f %f", &ga, &gb);

    float media = (ga + gb*2)/3;

    printf("Media final: %.2f", media);

    if (media >= 6)
    {
        printf("Voce foi aprovado");
        return 0;
    }

    if((10 - ga) >= (10 -gb)*2)
    {
        printf("\nSugestao de recuperacao de grau -> GA");
        printf("\nVoce precisa no minimo da nota: %f", (18-2*gb));
    }
    else
    {
        printf("\nSugestao de recuperacao de grau -> GB");
        printf("\nVoce precisa no minimo da nota: %f", ((18 -gb)/2));
    }

    printf("\n");
    return 0;
}
