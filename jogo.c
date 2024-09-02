#include <stdio.h>

int main() {
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

    int chute;
    int tentativas = 1;

    int pontos = 1000;

    while(1) {

        printf("Tentativa %d\n", tentativas);
        printf("Informe o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Voce nao pode chutar números negativos!\n");
            continue;
        }

    int acertou = (chute == numerosecreto);
    int maior = chute > numerosecreto;

    if(acertou) {
        printf("Parabens! Voce acertou!\n");
        printf("Jogue de novo, você e um bom jogador!\n");

        break;
    }

            else if(maior) {
                printf("Seu chute foi maior que o numero secreto\n");
            }

            else {
                printf("Seu chute foi menor que o numero secreto\n");
            }

            tentativas++;

            int pontosperdidos = (chute - numerosecreto) / 2;
            pontos = pontos - pontosperdidos;

        }

        printf("Fim de jogo!\n");
        printf("Voce acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %d\n", pontos);

    }
