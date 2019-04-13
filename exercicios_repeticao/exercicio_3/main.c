#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int maior;
    int menor;
    for(int i = 1; i <= 10; i ++) {
        printf("\ndigite o %d° numero: ", i);
        scanf("%d", &n);
        if(i == 1 || n > maior){
            maior = n;
        }
        if(i == 1 || n < menor) {
            menor = n;
        }
    }

    printf("O maior numero digitado foi %d\n", maior);
    printf("O menor numero digitado foi %d\n", menor);
    return 0;
}
