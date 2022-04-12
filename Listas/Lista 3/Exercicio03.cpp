/*Com base nas funções básicas para manipulação de pilhas,
 faça um programa que leia 15 números e proceda, para cada um deles, como segue:
- se o número for par, insira-o na pilha;
- se o número lido for ímpar, retire um número da pilha;
- Ao final, esvazie a pilha imprimindo os elementos.*/
#include<stdio.h>
#include<locale.h>
#define max 15
int pilhaCheia(int n){
	if(n == max){
		return 1;
	}else{
		return 0;
	}
}
int pilhaVazia(int n){
	if(n == -1){
		return 1;
	}else{
		return 0;
	}
}

void inserir(int *pilha,int *n,int *topo,int valor){
	if(pilhaCheia(*n) == 1){
		printf("\nPilha cheia!");
	}else{
		if(valor % 2 == 1){
		}
		
	}
}

void remover(int *pilha,int *topo,int *n){
	if(filaVazia(*n) == 1){
		printf("\nFila vazia!");
	}else{
		(*n)--;
	}
}

int main(){
	setlocale(LC_ALL,"");
	int pilha[max];
	int topo = -1,n = 0,valor,op;
	
	do{
		printf("\n1-Inserir um número na pilha\n");
		printf("\n2-Mostrar topo da pilha\n");
		printf("\n3-Remover elemento da pilha\n");
		printf("\n4-Sair\n");
		scanf("%d",&op);
		
		switch(op){
			case 1:
				//inserir
				break;
			case 2:
				//mostrarTopo
				break;
			case 3:
				//remover
				break;
			case 4:
				printf("\nSaindo...");
				break;
			default:
			printf("\nOpção escolhida inválida,por vafor tente novamente \n");
		}
		
	}while(op !=4);
}
