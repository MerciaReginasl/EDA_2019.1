#include <stdio.h>
#include <math.h>
#include <string.h>


int main (void){
	
	int c, n, esq[35], dir[35], t, pares; //declarando variáveis simples e vetores
	char lad[1];//tamanho do caracter
	
	while(scanf("%d", &n) != EOF){//o EOF verifica se o ultimo caracter 
	                              //lido de um ficheiro (arquivo) é o indicador de fim deste
		for(c=0;c<=30;c++){
			esq[c] = 0;
			dir[c] = 0;
		}
		while(n > 0){
			scanf("%d %c", &t, &lad[0]);//lendo valores
			if(lad[0] == 'D')
				dir[t-30]++;
			else
				esq[t-30]++;
			n--;
		}
		
		for(c=0,pares=0;c<=30;c++)
			if(esq[c] > 0 && dir[c] > 0){
				while(esq[c] != 0 && dir[c] != 0){
					pares++;//incrementa os pares
					esq[c]--;//decrementa  vetor a esquerda
					dir[c]--;//decrementa vetor a direita
				}
			}
		printf("%d\n", pares);	
		
	}
	
	
	return 0;
}
