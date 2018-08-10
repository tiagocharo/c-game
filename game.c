#include <stdio.h>
#define NUMER0_DE_TENTATIVAS 5

int main() {
    printf("\n");
    printf("\n");
    printf("######################################\n");
    printf("## Bem vindo ao jogo de adivinhação ##\n");
    printf("######################################\n");
    printf("\n");
    printf("\n");

    int numero_secreto = 50;
    int chute;

    for(int i = 1; i <= NUMER0_DE_TENTATIVAS; i++) {

        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Você chutou %d \n", chute);
        printf("Tentativa %d de %d\n", i, NUMER0_DE_TENTATIVAS);
        int acertou = chute == numero_secreto;

        if(chute < 0) {
            printf("Você não pode digitar números negativos!\n");
            i--;

            continue;
        }

        if(acertou) {
            printf("Parabéns!!! Você acertou.\n");
            break;
        } else {
            if (chute > numero_secreto) {
                printf("O número que você escolheu é maior do que o secreto.\n");
            } else {
                printf("O número que você escolheu é menor do que o secreto.\n");
            }
        }
    }

    printf("Fim de jogo!\n");
}   