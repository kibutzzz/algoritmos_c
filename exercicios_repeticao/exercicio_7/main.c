#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totalVotantes = 0;
    printf("Digite o numero total de votantes");
    scanf("%d", &totalVotantes);

    int voto;
    int totalVotos1 = 0;
    int totalVotos2 = 0;
    int totalVotos3 = 0;

    for(int i = 0; i < totalVotantes; i ++) {
        system("CLS");
        printf("voto numero %d", i + 1);
        printf("Candidatos: \n\n 1 \n 2 \n 3\n\n");
        scanf("%d", &voto);

        if(voto == 1 ) {
            totalVotos1 ++;
        } else if( voto == 2){
            totalVotos2 ++;
        }else if( voto == 3 ){
            totalVotos3 ++;
        } else {
            printf("Voto invalido!");
            i --;
        }
    }

    system("CLS");
    printf("\nTotal de votos do candidato 1: %d", totalVotos1);
    printf("\nTotal de votos do candidato 2: %d", totalVotos2);
    printf("\nTotal de votos do candidato 3: %d", totalVotos3);


    return 0;
}
