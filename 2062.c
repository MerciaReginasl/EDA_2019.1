#include <stdio.h>
#include <math.h>
#include <string.h>


int main (){
	
	int n;
	char letra [21];
	
	scanf("%d", &n);//ler o elemento
	
	while(n>0){ //enquanto n for maior ler elemento e //realiza as condições abaixo
		scanf("%s", letra);//%s especifica uma cadeia de caracteres
		if(strlen(letra) > 3)//tamanho da string
			printf("%s", letra);
		else
			if(letra[0] == 'O' && letra[1] == 'B')
				printf("OBI");//escreve na tela
			else
				if(letra[0] == 'U' && letra[1] == 'R')
					printf("URI");//escreve na tela
				else
					printf("%s", letra);//%s especifica uma cadeia de caractere
		if(n>1)//condição de n 
			printf(" "); //espaço
		else
			printf("\n");//quebra linha
		n--;//decrementação de n
	}
	
	return 0;
}

