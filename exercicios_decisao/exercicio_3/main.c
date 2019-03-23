#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;

    printf("digite um numero");
    scanf("%d", &n);

    if(n % 2 == 0) {
        printf("%d eh par ", n);
    } else {
        printf("%d eh impar ",n);
    }

    if(n > 0) {
        printf("e positivo");
    }

    if (n < 0){
        printf("e negativo");
    }


    return 0;
}
