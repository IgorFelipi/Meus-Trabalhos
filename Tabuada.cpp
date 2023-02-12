#include <stdio.h>
#include <stdlib.h>
int main(){
	int valor, i, j;
	for (i =1; i <= 100; i++){
		printf("Tabuada do %d\n", i);
		for(j=1; j<=100; j++){
			valor = i*j;
			printf("%d X %d = %d\n", i, j, valor);
		}
		
	}
	return 0;
}
