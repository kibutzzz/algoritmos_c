#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l1, l2, l3;
    printf("Digite os tres lados do triangulo");
    scanf("%f %f %f", &l1, &l2, &l3);

    if(l1 > l2 + l3 || l2 > l1 + l3 || l3 > l1 + l2) {
        printf("Nao eh um triangulo");
        return 0;
    }

    if(l1 == l2 && l2 == l3) {
        printf("\nEh um triangulo equilatero");
        return 0;
    }

    if(l1 == l2 || l2 == l3 || l1 == l3) {
        printf("\nEh um triangulo isosceles");
        return 0;
    }

    printf("\nEh um triangulo escaleno");
    return 0;
}
