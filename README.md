# Meus-#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	
	char linha [200];
	FILE *arquivo;
	
	arquivo = fopen("arq.txt", "a+");
	
	if (arquivo == NULL){
		printf("Erro ao abrir o arquivo.\n ");
		system ("pause");
		exit(-1);
	}
	
	printf("Digite seu texto:\n");
	
	while(strcmp(linha, "/exit") != 0){
		strcpy(linha, "");
		gets(linha);
		fflush(stdin);
		if (strcmp(linha, "/exit") != 0){
			fputs(linha, arquivo);
			fputs("\n", arquivo);
		}
	}

	fclose(arquivo);


}
