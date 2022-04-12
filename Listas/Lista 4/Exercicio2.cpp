//Faça um programa que implemente uma função que calcule o número de nós de uma lista encadeada.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct no{
	int valor;
	no *prox;	
}no;

no *inicioLista;

void inicializaLista(){
	inicioLista = NULL;
}

int listaVazia(){
	if(inicioLista == NULL){
		return 1;
	}else{
		return 0;
	}
}

no* criaNo(int valor){
	no *aux;
	aux = (no*) malloc(sizeof(no));
	aux->valor = valor;
	aux->prox = NULL;
	
	return aux;
	
}

void percorreLista(){
	if(listaVazia() == 1){
		printf("\nLista vazia!");
	}else{
		no *aux;
		aux = inicioLista;
		while(aux != NULL){
			printf("%d ",aux->valor);
			aux = aux->prox;
		}
	}
}

void inserirIni(int valor){
	no *aux;
	aux = criaNo(valor);
	aux->prox = inicioLista;
	inicioLista = aux;
}

void inserirFim(int valor){
	no *aux,*p;
	p = criaNo(valor);
	if(listaVazia() == 1){
		inicioLista = p;
	}else{
		
	aux = inicioLista;
	
	while(aux->prox != NULL){
		aux = aux->prox;
	}
	aux->prox = p;
	}
	
	
}

int qtdeNo(){
	if(listaVazia() == 1){
		printf("\nLista vazia!");
	}else{
		no *aux;
		int i = 0;
		aux = inicioLista;
		while(aux != NULL){
			aux = aux->prox;
			i++;
		}
		return i;
	}
}

int main(){
	setlocale(LC_ALL,"");
	int valor,op;
	inicializaLista();

	
	do{
		printf("\n1-Inserir na lista");
		printf("\n2-Exibir dados da lista");
		printf("\n3-Exibir tamanho da lista :");
		printf("\n4-Sair");
		printf("\nInforme sua opção :");
		scanf("%d",&op);
		
		switch(op){
			case 1:
				int op2;
				printf("\nDeseja inserir no início (1) ou no final da lista(2)");
				scanf("%d",&op2);
				printf("\nQual valor deseja inserir?");
				scanf("%d",&valor);
				if(op == 1){
					inserirIni(valor);
				}else{
					inserirFim(valor);
					
				}
			break;
			
			case 2:
				percorreLista();
				
				
			break;
			
			case 3:
				printf("\nQuantidade de números na lista: %d ",qtdeNo());
			break;
			case 4:
				printf("\nEncerrando o programa...");
				break;
			
			default:{
				printf("\nOpção inválida!");
				break;
			}
		}
		
	}while(op != 4);	
	
}
