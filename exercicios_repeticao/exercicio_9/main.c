#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    printf("digite um numero maior que 1: ");
    scanf("%d", &n);

    int ehPrimo = 1;
    for(int i = 2; i < n ; i ++){
        if(n % i == 0) {
            ehPrimo = 0;
            break;
        }
    }

    if(ehPrimo == 1) {
        printf("O numero %d eh primo", n);
    } else {
    printf("O numero %d nao eh primo", n);
    }
    return 0;
}
