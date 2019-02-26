#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main (){	
	
	int flag = 0, n, ant=0, out;
	
	while(scanf("%d", &n) != EOF){
		if(!flag && n < ant){
		    flag=1;
			out = ant + 1;			
		}
		ant = n;
	}
	
	if(!flag)
		out = ant + 1;

	printf("%d\n", out);
	
	return 0;
  
  }
