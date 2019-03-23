#include <stdio.h>
#include <stdlib.h>

int main()
{


    float a, b;
    printf("digite o primeiro numero ");
    scanf("%f", &a);

    printf("digite o segundo numero ");
    scanf("%f", &b);

    if(a > b)
    {
        printf("%.2f eh maior que %.2f", a, b);
        return 0;
    }

    if(b > a)
    {
        printf("%.2f eh maior que %.2f", b, a);
        return 0;
    }

    printf("%.2f e %.2f sao iguais", a, b);
    return 0;
}


