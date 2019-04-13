#include <stdio.h>
#include <stdlib.h>

int main()
{

    int e;
    printf("Digite o numero a ser exponencializado: ");
    scanf("%d", &e);
    int res = e;
    for(int i = (e-1); i > 1; i --){
        res *= i;
    }

    printf("%d! eh: %d", e, res);
    return 0;
}
