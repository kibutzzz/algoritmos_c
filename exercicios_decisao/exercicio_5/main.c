#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Digite a idade do nadador");
    scanf("%d", &i);

    if(i < 5)
    {
        printf("O nanador ainda não possui idade suficiente para competir");
    }
    else if(i < 8)
    {
        printf("Infantil A");
    }
    else if(i < 11)
    {
        printf("Infantil B");
    }
    else if(i < 14)
    {
        printf("Juvenil A");
    }
    else if(i < 18)
    {
        printf("Juvenil B");
    }
    else
    {
        printf("Adulto");
    }



    return 0;
}
