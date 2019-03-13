#include <stdio.h>
#include<string.h>
#include<math.h>
 
int main() {
    int vetor[2000];//vetor 
    int N, i, maior = 0;
    
        scanf("%d", &N);
        for(i=0; i<2000; i++)//valor inicial; para o loop; incrementa i
            vetor[i]=0;//vetor conta
        while(N >= 1){//enquanto N for maior que 1 continua lendo os valores.
            scanf("%d", &i); //ler valores da variavel i
            if(i>maior) //condição da variavel i 
                    maior=i; //maior recebe os valores de i
            vetor[i-1]++;//analisa o vetor e incrementa o vetor
            N--; //até encontar um valor menor 
        }
        
        for(N=0; N<=maior; N++)//valor inicial de N; para quando esta condição; incrementa N
            if(vetor[N] >= 1) //se vetor com valores maior ou igual a 1
                printf("%d aparece %d vez(es)\n", N + 1, vetor[N]); //copia valor na tela
                //indica na tela quantas vezes cada um deles aparece na entrada por ordem 
                //crescente de valor.
                
                
        return 0;
}
}
