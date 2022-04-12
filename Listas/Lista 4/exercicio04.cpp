//Implemente uma função que retorne o valor armazenado no último nó de uma lista encadeada de números inteiros.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
typedef struct no{
	int valor;
	no *prox;
}no;

no *inicioLista;

void inicializaLista(){
	inicioLista = NULL;
}

no *criaNo(int valor){
	no *aux;
	aux = (no*)malloc(sizeof(no));
	aux->valor = valor;
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

void inserirFim(int valor){
		no *aux,*p;
		p = criaNo(valor);
		
		if(listaVazia()){
			inicioLista = p;
		}else{
			aux = inicioLista;
			
			while(aux->prox != NULL){
			aux = aux->prox;
		}
		aux->prox = p;
		}
		
		
		
	
}

void inserirIni(int valor){

		no *aux;
		aux = criaNo(valor);
		aux->prox = inicioLista;
		inicioLista = aux;
	
}

void percorreLista(){
	if(listaVazia() == 1){
		printf("\nLista Vazia!");
	}else{
		no *aux;
		aux = inicioLista;
		while(aux != NULL){
			printf("%d ",aux->valor);
			aux = aux->prox;
		}
	}
}

void removeLista(int valor){
	no *aux = inicioLista;
		no *anterior = NULL;
	if(listaVazia() == 1){
		printf("\nLista Vazia!");
	}else{
		while((aux != NULL) && (aux->valor != valor)){
			anterior = aux->prox;
			aux = aux->prox;
	}
		
		if(aux == NULL){
			printf("\nElemento não foi encontrado!");
		}else{
			if(anterior == NULL){
				inicioLista = aux->prox;
				printf("\nElemento removido com sucesso!");
			}else{
				anterior->prox = aux->prox;
				free(aux);
				printf("\nValor removido com sucesso!");
			}
		}
	}
}

int retornaUltimoValor(){
	if(listaVazia() == 1){
		printf("\nLista Vazia!");
	}else{
		no *aux = inicioLista;
		while(aux->prox !=NULL){
			aux = aux->prox;
		}
		return aux->valor;
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
		printf("\n5-Ver último valor da lista");
		printf("\n6-Sair");
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
				//printf("\n %d",somaDosValores());
			break;
			case 4:
				printf("\nDigite o valor que deseja remover : ");
				scanf("%d",&valor);
				
				removeLista(valor);
				break;
				case 5:
					printf("\nÚltimo valor da lista : %d",retornaUltimoValor());
				break;
			case 6:
				printf("\nEncerrando o programa...");
				break;
			
			default:{
				printf("\nOpção inválida!");
				break;
			}
		}
		
	}while(op != 6);	
}
