#include <stdio.h>
#include <stdlib.h>  //abs()  
#include <time.h> //time() e srand()
#include <math.h>

#define NUMERO_DE_TENTATIVAS 3 //Define, constante e números mágicos

int main(void)
{
  printf("************************************\n");
  printf("* Bem-vindo ao Jogo de Adivinhação *\n");
  printf("************************************\n");

  int numerosecreto = 42;
  int chute;
  int tentativas = 1;
  double pontos = 1000;
  int outravariavel = pontos * 7;
  double pontoperdidos; 

  /*pontos = pontos + 2;
  pontos = pontos * 4 / 3; 
  pontos = pontos - 1; */

  while (1)
  { //Não sabe a quantidade? while

    printf("Qual é o seu %do. chute? \n", tentativas);
    scanf("%d", &chute);

    if (chute < 0)
    {
      printf("Você não pode chutar números negativos\n");
      continue;
    }
    printf("Seu %do. chute foi %d\n", tentativas, chute);

    int acertou = chute == numerosecreto;
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
  }
  //double -> "%f" || int -> "%d" 
  for (int pontos = 1; pontos <= NUMERO_DE_TENTATIVAS; pontos++)
  {
    int pontos = ((4 * 2) + (1 / 2)) * 3 - 1; //função matemática abs()
    double pontosperdidos = abs(chute - numerosecreto) / 2.0;
    /*double pontosperdidos = (double)(chute - numerosecreto) / (double)2;*/
    if(pontosperdidos <0){
      pontosperdidos = pontosperdidos * -1; 
    }
  }
  //função time e srand 
  int segundos = time(0);
  srand(segundos); 

  //função rand - gerar número aletório 
  int numerogrande = rand(); 
  //máquina só poderá chutar números de 0 a 99.
  //Operador % resto da divisão por 100 
  int numerossecreto = numerogrande % 100; 

  printf("Você fez %.2f pontos\n", pontos);
  printf("Fim de jogo!\n");
  printf("Obrigado por jogar!", tentativas);
}
// página 67
