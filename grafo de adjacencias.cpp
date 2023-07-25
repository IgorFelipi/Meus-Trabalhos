#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
# define max 10

int tamanho = 0;
int grafo [max];
int ma[max] [max];
int op =1;


int grafo_tamanho();
void grafo_desenhar();
void grafo_desenhar_ma();
void grafo_inserir();
void grafo_remover();
void menu_mostrar();


int main(){
	setlocale(LC_ALL,"portuguese");
	while(tamanho <= 0|| tamanho > max){
		tamanho = grafo_tamanho();
		if (tamanho <= 0 || tamanho > max){
			system("cls");
			printf("Escolha um valor entre 1 e %d!\n\n", max);
		}
		else{
			for(int i=0; i<tamanho; i++){
				grafo[i]=i;
			}
		}
	}
	while(op!=0){
		system("cls");
		grafo_desenhar();
		grafo_desenhar_ma();
		menu_mostrar();
		scanf("%d", &op);
		switch (op){
			case 1:
				grafo_inserir();
			break;
			case 2:
				grafo_remover();
			break;
			case 0:
				printf("Muito obrigado por usar meu programa!\n");
			break;
			default:
				printf("Opção inválida, tente novamente!\n");
		}
		
	}
	system("pause");
	return 0;
}



int grafo_tamanho(){
	int tamanho;
	printf("Escolha a quantidade de vértices do grafo: ");
	scanf("%d", &tamanho);
	return tamanho;
}


void grafo_desenhar(){
	printf("Listas de vértices\n[ ");
	for(int i =0; i< tamanho; i++){
		printf("%d ", grafo[i]);
	}
	printf("]\n\n");
}


void grafo_desenhar_ma(){
	printf("Matriz de adjacencias\n");
	for(int i =0; i <tamanho; i++){
		for(int j=0; j<tamanho; j++){
			printf("  %d", ma[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
}


void grafo_inserir(){
	int num1, num2;
	system("cls");
	printf("Escolha o vértice de origem entre 0 a %d: ", tamanho-1);
	scanf("%d", &num1);
	printf("Escolha o vértice de destino entre 0 a %d: ", tamanho-1);
	scanf("%d", &num2);
	if(num1 >tamanho-1 || num2 >tamanho-1 || num1<0 || num2<0 ){
		printf("\nOs valores precisam estar entre 0 e %d!\n", tamanho-1);
		system("pause");
	}
	else{
		ma[num1][num2] =1;
		ma[num2][num1] =1;
	}
}


void grafo_remover(){
	int num1, num2;
	system("cls");
	printf("Escolha o vértice de origem entre 0 a %d: ", tamanho-1);
	scanf("%d", &num1);
	printf("Escolha o vértice de destino entre 0 a %d: ", tamanho-1);
	scanf("%d", &num2);
	if(num1 >tamanho-1 || num2 >tamanho-1 || num1<0 || num2<0 ){
		printf("\nOs valores precisam estar entre 0 e %d!\n", tamanho-1);
		system("pause");
	}
	else{
		ma[num1][num2] =0;
		ma[num2][num1] =0;
	}
}


void menu_mostrar(){
	printf("===ESCOLHA UMA OPÇÃO===\n");
	printf("1 - Inserir aresta\n");
	printf("2 - Remover aresta\n");
	printf("0 - Sair\n\n");
}
