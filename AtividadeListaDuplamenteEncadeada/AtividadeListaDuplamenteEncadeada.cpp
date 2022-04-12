#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

typedef struct no{
	no *prox;
	no *ante;
	char letra;
}no;

no *inicioD;
no *inicioE;

void inicializaLista(){
	inicioD = NULL;
	inicioE = NULL;
}

int listaVazia(){
	if(inicioD == NULL){
		return 1;
	}else{
		return 0;
	}
}

no *criaNo(char letra){
	no *aux;
	
	aux = (no*) malloc(sizeof(no));
	if(aux == NULL){
		printf("\nErro de memória");
		exit(0);
	}else{
		aux->letra = letra;
		aux->prox = NULL;
		aux->ante = NULL;
		return aux;
		
	}
	
}

void inserirDir(char letra){
	no *aux;
	aux = criaNo(letra);
	if(listaVazia()){
		inicioE = aux;
		inicioD = aux;
	}else{
		aux->ante = inicioD;
		inicioD->prox = aux;
		inicioD = aux;
	}
		
		
	
}

void percorrerDir(){
	no *aux;
	aux = inicioD;
	if(listaVazia() == 0){
		while(aux != NULL){
			printf("%c",aux->letra);
			aux = aux->ante;
		}
		
	}else{
		printf("\nLista Vazia!");
	}
}

void percorrerEsq(){
	no *aux;
	aux = inicioE;
	if(listaVazia() == 0){
		
		while(aux != NULL){
			printf("%c",aux->letra);
			aux = aux->prox;
		}
		
		
	}else{
		printf("\nLista Vazia!");
		
	}
}




void identificaPalindromo(){
	no *aux,*ultimo;
	int i =0,j = 0;
	if(listaVazia() == 0){
		aux = inicioE;
		ultimo = inicioD;
		
		while(aux->prox != NULL){
			aux = aux->prox;
			ultimo = ultimo->ante;
			i++;
			if(aux->letra == ultimo->letra){
				j++;
			}
		}
		
		if(i == j){
			printf("\nPalavra formada é um palíndromo");
		}else{
			printf("\nPalavra formada não é um palíndromo");
		}
	}else{
		printf("\nLista Vazia!");
	}
}


int main(){
	setlocale(LC_ALL,"");
	char letra;
	int op = 1;
	inicializaLista();
	
	do{
		
		printf("\nPor favor, digite uma letra: \n");
		scanf("%s",&letra);
		inserirDir(letra);
		
		printf("\nDeseja continuar?Aperte 1\n");
		scanf("%d",&op);
		
	}while(op == 1);
	
	percorrerDir();
	
	identificaPalindromo();
	
}
