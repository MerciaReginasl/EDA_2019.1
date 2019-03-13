#include <stdio.h>
 
int main() {
 
    int n, i; //declara variaveis simples
    int v[3]; //tamanho do vetor
    int p0; p1; //pico minimo e pico máximo
    int picos; //valores de saída
    
    while(1){ 
    //sempre entre o loop, toda vez que a condição for testada (no início, e sempre 
    //que um passo termina) ela vai dar verdadeira e o loop vai continuar.
    
        scanf("%d", &n); //lido o elemento
        
        if(n==0) break; //o laço termina nesta condição
        picos = 0; //contar
        
        scanf("%d", &v[0]); //ler valor
        scanf("%d", &v[1]);
        
        if(n==2){
            if(v[0] != v[1]) picos = 2; //nesta condição pico atribui 2
        }
        else{ //senão recebe vetores na posição
            p0 = v[0];
            p1 = v[1];
            
            for(i=2; i<n; i++){ //condição do loop
                scanf("%d", &v[2]); //ler o valor
                
                //condições de picos
                
                if(((v[1]>v[0]) && (v[1]>v[2])) || ((v[1]<v[0]) && (v[1]<v[2]))) 
                    ++picos;
                
                v[0]=v[1];
                v[1]=v[2];
                
                }
            
                //condições de picos e vetores
            
                if((p0>p1 && p0>v[2]) || (p0<p1 && p0<v[2]))
                    ++picos;
                    
                if((v[2]>v[0] && v[2]>p0) || (v[2]<v[0] && v[2]<p0))
                    ++picos;
                    
        }
        
        printf("%d\n", picos); //número de picos existentes no loop musical 
            
            
    }
 
    return 0;
}
