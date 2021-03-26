#include <stdio.h>
#include <math.h>

#define NUMERO_DE_TENTATIVAS 3//Define, constante e números mágicos

int main(void){
  printf("************************************\n");
  printf("* Bem-vindo ao Jogo de Adivinhação *\n");
  printf("************************************\n");
  int acertou;
  int numerosecreto = 42;
  int chute;
  int ganhou = 0;
  int tentativas = 1;    
  while(!ganhou){ //Não sabe a quantidade? while 
    printf("Qual é o seu %do. chute? ", tentativas);
    scanf("%d", &chute);

    if(chute < 0){
      printf("Você não pode chutar números negativos\n");
      continue; 
    }
    printf("Seu %do. chute foi %d\n", tentativas, chute);

    acertou = chute == numerosecreto;
    int maior = chute > numerosecreto; 

    if(acertou){
        printf("Parabéns! Você acertou\n");
        ganhou = 1;
    } else if (maior){
        printf("Seu chute foi maior do que o número secreto!\n");  
    } else {
        printf("Seu chute  foi menor do que o número secreto!\n");
    }
    tentativas++;
  }

  printf("Obrigado por jogar!"); 
}
