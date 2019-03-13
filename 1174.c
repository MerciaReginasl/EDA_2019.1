#include <stdio.h>
#include <string.h>

int main(){
  double A[100];//tamanho do vetor A
  int i;//declaração da variavel simples

  for(i = 0; i < 100; i++)//condição para o loop
  {
    scanf("%lf", &A[i]);//ler o elemento do vetor A
  }

  for(i = 0; i < 100; i++)//condição para o loop
  {
    if(A[i] <= 10.0)//o vetor A for menor ou igual a 10.0 então:
     printf("A[%d] = %.1lf\n", i, A[i]);//onde i é a posição do vetor  e o valor armazenado na posição, com uma casa após o ponto decimal.
  }
  return 0;
}
