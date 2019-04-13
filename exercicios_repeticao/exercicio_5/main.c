#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b;
    printf("Digite A e B sendo A < B");
    scanf("%d %d",&a, &b);

    int soma = 0;

    for(int i = a; i <= b; i ++) {
        soma += i;
    }
    printf("A soma dos numeros entre A e B(incluso) eh %d", soma);

    return 0;
}
