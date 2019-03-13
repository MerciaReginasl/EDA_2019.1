#include <stdio.h>
#include <math.h>


int main(){
    int i, j, c, l, aux = 1;//declaração de variaveis simples c=coluna, l=linhas
    float M[12][12], soma = 0.0, media = 0.0;//propriedade da matriz
    char O;//caracter declarada

        scanf("%c", &O);//ler caracter

        for(i = 0; i <= 11; i++){//condiçao loop para i
            for(j = 0; j <= 11; j++){//condiçao do loop para j
            scanf("%f", &M[i][j]);//ler elementos de i e j
            }
        }

        for(l = 0; l <= 11; l++){//condição para linha da matriz
            for(c = aux; c <= 11; c++){//condição envolvendo o a auxiliar
                soma += M[l][c];// equivale a soma = soma + vetor M de linha e coluna

            }
               aux++;//a variavel aux será incrementada 
        }
        if(O == 'S'){ //soma

            printf("%.1f\n", soma);//escrever na tela o resultado da soma
        }
        else if(O == 'M'){//media
             media = soma / 66.0;//equivale a media da soma 
                printf("%.1f\n", media);//escreve a media
        }
        return 0;
}
