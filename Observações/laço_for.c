#include <stdio.h>
#include <math.h>

#define NUMERO_DE_TENTATIVAS 3 //Define, constante e números mágicos

int main(void){
  printf("************************************\n");
  printf("* Bem-vindo ao Jogo de Adivinhação *\n");
  printf("************************************\n");

  int numerosecreto = 42;
  int chute;
  int ganhou = 0;
  int tentativas = 1;  
  int acertou;  
  //SABE A QUANTIDADE? for 
  for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i ++){
      printf("Qual é o seu %do. chute? ", i);
      scanf("%d", &chute);
      printf("Seu %do. chute foi %d\n", i, chute);
      int acertou = chute == numerosecreto; 
  

    if(acertou){
        printf("Parabéns! Você acertou!\n");
        break;
    } else {
      int maior = chute > numerosecreto; 
      if (maior){
          printf("Seu chute foi maior maior do que o número secreto!\n");
      }else{
          printf("Seu chute foi menor do que o número secreto!\n");
      }  
    }
  }
  printf("Obrigado por jogar!\n");
}

// Onde parei? página 41