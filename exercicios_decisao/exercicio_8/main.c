#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, m, a;
    printf("digite o dia do seu nascimento");
    scanf("%d", &d);


    printf("digite o mes do seu nascimento");
    scanf("%d", &m);


    printf("digite o ano do seu nascimento");
    scanf("%", &a);

    if(d < 1 || d > 30 || m < 1 || m > 12 || a < 1880 || a > 2019) {
        printf("Data invalida");
        return 0;
    }


    printf("Data valida");

    return 0;
}
