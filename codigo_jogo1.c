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
  double pontos = 1000;

  int nivel;
  int totaldetentativas;

  int acertou = 0;
  //int tentativas = 1;

  //função time e srand
  srand(time(0));
  int numerosecreto = rand() % 100;
  //máquina só poderá chutar números de 0 a 99
  //função rand - gerar número aletório

  printf("Qual o nível de dificuldades?\n");
  printf("(1) Fácil (2) Médio (3) Difícil\n\n");
  printf("Escolha: ");
  scanf("%d", &nivel);

  if (nivel == 1)
  {
    totaldetentativas = 20;
  }
  else if (nivel == 2)
  {
    totaldetentativas = 15;
  }
  else
  {
    totaldetentativas = 6;
  }

  //sabemos a quantidade de vezes usa o for
  for (int i = 1; i <= totaldetentativas; i++)
  { 

    printf("Tentativa %d de %a\n", i, totaldetentativas);

    printf("Qual é o seu %do. chute? \n", i);
    scanf("%d", &chute);
    

    if (chute < 0)
    {
      printf("Você não pode chutar números negativos\n");
      continue;
    }

    printf("Seu %do. chute foi %d\n", i, chute);

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

    double pontosperdidos = abs(chute - numerosecreto) / 2.0;
    pontos = pontos - pontosperdidos;
  }

  printf("Você fez %.2f pontos\n", pontos);
  printf("Obrigado por jogar!\n");
}
// página 72
