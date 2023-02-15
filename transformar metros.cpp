#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
	setlocale( LC_ALL, "Portuguese");
	int M, cm, dcm, mm;
	
	printf(" Digite o valor em metros \n:" );
	scanf( "%d", & M);
	
	cm = M * 100;
	dcm = M * 10;
	mm = M * 1000;
	fflush (stdin);
	
	printf(" O valor em centimetros é %d \n decimentro %d \n milimetros %d \n ", cm, dcm, mm);
	
	return 0;  
	
	
	
	
}



