#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void LimpaBuffer()
// Limpa buffer de entrada para fgets 

{ while(getchar()!='\n');
return;
}

int main (void){
	
	char ex[1003];
	int c; 
	int t; 
	int estacerto; 
	int ab; 
	int fe; 
	int pas1;
	
	while(fgets(ex,1003,stdin) != NULL){
		for( c=0; ex[c] >= ' '; c++ );
		ex[c]= '\0';
		t = strlen(ex);
		for(c=0,estacerto=1, ab=0, fe=0, pas1=0; c<t && estacerto==1;c++)
			if(ex[c] == '(' || ex[c] == ')')
				if(pas1==0)
					if(ex[c] == ')' && ab==0)
						estacerto=0;
					else{
							pas1++;
							ab++;
						}
				else
					if(ex[c] == ')'){
						fe++;
						if(fe>ab)
							estacerto=0;						
					}else
						ab++;
		
		if(estacerto==1 && ab != fe)
			estacerto=0;
		
		
		if(estacerto==1)
				printf("correct\n");
		else
			printf("incorrect\n");
	}
	return 0;
}
