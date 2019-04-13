#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    printf("informe o limite de numeros pares a serem mostrador: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if((i % 2) == 0)
            printf("\n%d", i);
    }

    return 0;
}
