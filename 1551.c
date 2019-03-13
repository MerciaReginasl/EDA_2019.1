#include <stdio.h>
#include <string.h>

int main(){

  int N, i, aux1 = 0, aux2 = 0, aux3 = 1;

  scanf("%d", &N);

  for(i = 1; i < N; i++)
  {
   if(i % 2 == 1)
   {
      printf("%d ",aux2);
          aux2 = aux1+aux3;
          aux1 = aux2;
  }

      else if( i == 2)
          printf("%d ",aux2);
      else if(i % 2 == 0)
      {
          printf("%d ",aux2);
          aux2 = aux1+aux3;
          aux3 = aux2;
      }
  }
  printf("%d\n",aux2);

  
  return 0;

}
