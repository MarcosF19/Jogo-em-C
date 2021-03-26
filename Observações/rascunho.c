#include <stdio.h> 
#include <time.h> 

int main(void)
{
    int segundos = time(0);
    srand(segundos); 

    int n1 = rand(); 
    printf("%d", n1);     
}