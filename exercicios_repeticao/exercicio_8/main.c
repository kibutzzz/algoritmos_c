#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Informe a quantidade de alunos");
    int qtdA = 0;
    scanf("%d", &qtdA);

    float ga = 0;
    float gb = 0;
    float media = 0;
    float gca;
    float gcb;
    for(int i = 0; i < qtdA; i ++) {

        printf("digite nota GA e GB: \n");
        scanf("%f %f", &ga, &gb);
        media = (ga + 2*gb)/3.0 ;
        if(media >= 6) {
            printf("Aluno aprovado com a media %f!\n",media);
        } else {
            gca = 18 - 2*gb;
            gcb = (18 - ga)/2;

            if(gca< gcb) {
                printf("Sugestão de prova do GC é GCA\nNota necessaria eh %f", gca);
            } else {
                printf("Sugestão de prova do GC é GCB\nNota necessaria eh %f", gcb);
            }
        }
    }


    return 0;
}
