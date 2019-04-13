#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 2;
    int qtd = 0;
    while(n < 20)
    {

        int ehPrimo = 1;
        for(int i = 2; i < n ; i ++)
        {
            if(n % i == 0)
            {
                ehPrimo = 0;
                break;
            }
        }


        if(ehPrimo == 1)
        {
            printf("O %d° numero %d eh primo", qtd+1, n);
            qtd ++;
            printf("\n");
        }


        n ++;
    }
    return 0;
}
