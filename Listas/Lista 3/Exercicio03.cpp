/*Com base nas fun��es b�sicas para manipula��o de pilhas,
 fa�a um programa que leia 15 n�meros e proceda, para cada um deles, como segue:
- se o n�mero for par, insira-o na pilha;
- se o n�mero lido for �mpar, retire um n�mero da pilha;
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
		printf("\n1-Inserir um n�mero na pilha\n");
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
			printf("\nOp��o escolhida inv�lida,por vafor tente novamente \n");
		}
		
	}while(op !=4);
}
