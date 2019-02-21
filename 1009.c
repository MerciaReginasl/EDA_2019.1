#include<stdio.h>

int main (){
	
	char nome[100];
	double salario;
	double vendas;
	
	scanf("%s", nome);
	scanf("%lf", &salario);
	scanf("%lf", &vendas);
	
	double sal_final = salario + (vendas * 0.15);
	
	printf("TOTAL = R$ %.2f\n", sal_final);
	
	return 0;
	
	
	
}
