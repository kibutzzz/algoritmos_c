#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0;

    for(int i = 1; i <= 100; i ++) {
        soma += i;
    }

    printf("Soma dos numeros entre 1 e 100 é %d", soma);

    return 0;
}
