/*Escreva uma função que calcule a soma das chaves dos nós de uma lista encadeada.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

typedef struct no{
	int info;
	no *prox;	
}no;

no *inicioLista;

void inicializaLista(){
	inicioLista = NULL;
}

no* criaNo(int valor){
	no *aux;
	aux = (no*) malloc (sizeof(no));
	aux->info = valor;
	aux->prox = NULL;
	return aux;
	
}

int listaVazia(){
	if(inicioLista == NULL){
		return 1;
	}else{
		return 0;
	}
}

void percorreLista(){
	if(listaVazia() != 1){
		no *aux;
		aux = inicioLista;
		while(aux != NULL){
			printf("%d ",aux->info);
			aux = aux->prox;
		}
		
	}else{
		printf("\nLista Vazia!");
	}
}

void inserirIni(int valor){
	no * aux = criaNo(valor);
	aux -> prox = inicioLista;
	inicioLista = aux;
}

void inserirFim(int valor){
	no * aux,*p;
	p = criaNo(valor);
	if(listaVazia()){
		inicioLista = p;
	}else{
		aux = inicioLista;
		while(aux->prox != NULL){
			aux = aux ->prox;
		
		}
			aux->prox = p;
	}
}

int somaDosValores(){
	no *aux;
	int soma;
	if(listaVazia() == 1){
		printf("\nNão foi possível somar, pois não há valores na lista");
	}else{
		aux = inicioLista;
		while(aux != NULL){
			soma = soma + aux->info;
			aux = aux->prox;
		}
	}
	return soma;
}

void removerListaIni(){
	if(listaVazia() == 1){
		printf("\nLista Vazia");
	}else{
		no *aux;
		aux = inicioLista;
		inicioLista = aux->prox;
		free(aux);
	}
}

int main(){
	setlocale(LC_ALL,"");
	int op,valor;
	
	do{
		printf("\n1-Inserir na lista");
		printf("\n2-Exibir dados da lista");
		printf("\n3-Soma dos valores na lista");
		printf("\n4-Remover da Lista");
		printf("\n5-Sair");
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
				printf("\nSoma dos números :");
				printf("\n %d",somaDosValores());
			break;
			case 4:
				removerListaIni();
				break;
			case 5:
				printf("\nEncerrando o programa...");
				break;
			
			default:{
				printf("\nOpção inválida!");
				break;
			}
		}
		
	}while(op != 5);	
	
}
