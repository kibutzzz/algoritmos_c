#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a, b, c;

    printf("Digite 3 numeros: \n");
    scanf("%f %f %f", &a, &b, &c);

    if(a > b) {
        if( a > c) {
            printf("%.2f eh o maior numero\n", a);
        } else {
           printf("%.2f eh o maior numero\n", c);
        }
    } else {
        if(b > c) {
            printf("%.2f eh o maior numero\n", b);
        } else {
            printf("%.2f eh o maior numero\n", c);
        }
    }

    return 0;
}

void ehMaior(float n) {
    printf("%.2f eh o maior numero\n", n);
}
