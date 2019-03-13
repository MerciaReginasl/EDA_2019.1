#include <stdio.h>
#include <math.h>

 
int main() {
 
    int vetor[10]; //declara o vetor
    int n, i;
    
    for(i=0; i<=9; i++){ //condição do loop
            scanf("%d", &n); //ler o valores da variavel de controle i
        
            //condição para os valores do vetor X
        
            if(n<=0) // os valores podem ser negativos 
                    vetor [i] = 1; //n é a posição do vetor 
            else
                    vetor [i] = n;
    }
    
    for(i=0; i<=9; i++) //condição do loop
            printf("X[%d] = %d\n", i, vetor[i]); //valor onde i é a posição do vetor e x é 
                                                 //o valor armazenado naquela posição.
        
 
    return 0;
}
