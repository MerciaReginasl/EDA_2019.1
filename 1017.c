#include<stdio.h>
#include<math.h>


int main ()
{
	float Vm;
	float tempo;
	float quant_cbt;
	
	scanf("%f", &Vm);
	scanf("%f", &tempo);
	
	
	quant_cbt = (Vm*tempo)/12;

	
	printf("%.3f\n", quant_cbt);
	
	return 0;
}
