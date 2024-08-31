#include <stdio.h>

int main() {
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int numerosecereto = 42;
    int chute;

for(int i = 1; i <= 3; i++) {       
    printf("Tentativa %d de 3\n",i);
    printf("Informe seu chute: ");
     scanf("%d",&chute);
    printf("Seu chute foi %d \n",chute);
    int acertou = (chute == numerosecereto);
     if(acertou){
       printf("Parabens, Voce acertou!\n"); 
       printf("Jogue de novo, voce e um bom jogador!");
        }else{
          int maior = (chute > numerosecereto);
          if(maior){
               printf("Seu chute foi maior que o numero secreto\n");    
            }
            int menor = (chute < numerosecereto);
            if(menor){
                printf("Seu chute foi menor que o numero secreto");
            }
           
    } 
  }
   printf("Fim de jogo!")

}