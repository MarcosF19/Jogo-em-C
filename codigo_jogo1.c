#include <stdio.h>
#include <stdlib.h> //abs()
#include <time.h>   //time() e srand()

#define NUMERO_DE_TENTATIVAS 3 //Define, constante e números mágicos

int main()
{
  printf("************************************\n");
  printf("* Bem-vindo ao Jogo de Adivinhação *\n");
  printf("************************************\n");

  int chute;
  int acertou = 0;
  int tentativas = 1;
  double pontos = 1000;

  //função time e srand
  srand(time(0));
  int numerosecreto = rand() % 100;
  //máquina só poderá chutar números de 0 a 99
  //função rand - gerar número aletório

  while (!acertou)
  { //Não sabe a quantidade? while

    printf("Qual é o seu %do. chute? \n", tentativas);
    scanf("%d", &chute);

    if (chute < 0)
    {
      printf("Você não pode chutar números negativos\n");
      continue;
    }

    printf("Seu %do. chute foi %d\n", tentativas, chute);

    acertou = chute == numerosecreto;
    int maior = chute > numerosecreto;

    if (acertou)
    {
      printf("Parabéns! Você acertou\n");
      printf("Jogue de novo você é um bom jogador!\n");
      break;
    }

    else if (maior)
    {
      printf("Seu chute foi maior do que o número secreto!\n");
    }

    else
    {
      printf("Seu chute  foi menor do que o número secreto!\n");
    }

    tentativas++;

    double pontosperdidos = abs(chute - numerosecreto) / 2.0;
    pontos = pontos - pontosperdidos;
  }

  printf("Você fez %.2f pontos\n", pontos);
  printf("Obrigado por jogar!\n", tentativas);
}
// página 67
