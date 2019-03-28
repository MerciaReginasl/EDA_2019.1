#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void LimpaBuffer()
{ 
	while(getchar()!='\n');
	return;
}


int main (void){

	char frase[53], palavra[26];//tamanho do caractere 26 letras do alfabeto
	int casos;//declarando variaveis
	int cont; 
	int n=0;//inicio da contagem
	int i; 
	int c;//declarando variáveis 
	
	scanf("%d", &casos);
	//ucaso não queria usar o espaço entre " e o %d na scanf, 
	//é limpar o buffer após cada scanf()
	LimpaBuffer();

	while(casos>=1){//enquanto os casos casos forem maiores ou iguais a 1
		fgets(frase,53,stdin);//que limita a leitura.
		for( c=0; frase[c] >= ' '; c++ );//loop 
		frase[c]= '\0';//pra indicar o final da string
		n = 0;	//inicia contagem	
		i = strlen(frase);	//tamanho da frase	
		if(frase[0] > 32){//condição se
			palavra[n] = frase[0];//contagem de n palavras 
			n++;//incrementa
		}
		for(cont=1;cont < i;cont++)//condição
			if(frase[cont-1] == ' ' && frase[cont] != ' '){//ultima palavra
				palavra[n] = frase[cont];				
				n++;
			}				
		palavra[n] = '\0';//pra indicar o final da string
		
		printf("%s\n", palavra);//Para cada caso de teste imprima a mensagem oculta no texto de entrada.
		casos--;
	}
	
	return 0;
}
