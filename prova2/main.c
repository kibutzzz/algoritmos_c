#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  numero = 1;
    int qtdImpares = 0;
    int qtdIntervalo = 0;

    printf("Prova 2\n");
    printf("Digite numeros positivos ou negativos e quando o conjunto estiver completo digite 0\n\n");
    while(numero != 0) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if(numero % 2 == 1) {
            qtdImpares ++;
        }

        if(numero >= 5 && numero <= 15) {
            qtdIntervalo ++;
        }
    }

    system("CLS");
    printf("Resultados do conjunto: \nNumeros Impares digitados: %d\nNumeros entre digitados 5 e 15: %d\n", qtdImpares, qtdIntervalo);

    return 0;
}
