//página 63  Conversão = casting 
#include <stdio.h>
#include <math.h>
double pi = 3.1415; //aqui a casa decimal está guardada 

int main(void){
  int a = 3;
  int b = 2; 

  double resultado = (double)a / (double)b;
  printf("%f", resultado);  
} 


// aqui a casa decimal está guardada
double pi = 3.1415;
// agora o casting forçado, de um tipo
// que aguenta mais dados para um que aguenta
// menos dados, perde informação
int coitadodopi = (int)pi;
printf("%d", coitadodopi);