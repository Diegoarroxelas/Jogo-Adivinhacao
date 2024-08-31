#include <stdio.h>

int main() {
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int numerosecereto = 42;

    int chute;
    int ganhou = 0; 
    int tentativas = 1;

while(ganhou == 0) {       
    printf("Tentativa %d \n",tentativas);
    printf("Informe seu chute: ");

    scanf("%d",&chute);
    printf("Seu chute foi %d \n",chute);
    int acertou = (chute == numerosecereto);
    if(chute < 0){
        printf("Voce nao pode chutar Numeros Negativos!\n");
        continue;
    }
    if(acertou){
        printf("Parabens! Voce acertou!\n"); 
        printf("Jogue de novo, voce e um bom jogador!\n");

        ganhou = 1;
    }else{
        int maior = (chute > numerosecereto);
        if(maior){
            printf("Seu chute foi maior que o numero secreto\n");    
            }
            int menor = (chute < numerosecereto);
            if(menor){
                printf("Seu chute foi menor que o numero secreto\n");
            }
        tentativas++;
    } 
  }
   printf("Fim de jogo!\n");
   printf("Voce acertou em %d tentativas!",tentativas - 1);

}