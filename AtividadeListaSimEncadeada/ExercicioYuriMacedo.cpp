//Faça um sistema para gerenciar os produtos (código, nome e preço) de um supermercado utilizando uma lista simplesmente encadeada,
//apresentando ao usuário as seguintes opções:
//1- Cadastrar produto
//2- Exibir a lista de produtos
//3- Buscar um produto
//4- Remover um produto
//5- Sair


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

typedef struct produtos{
	float valor;
	int codigo;
	char nome[20];
	produtos *prox;
}produtos;

produtos *inicioLista;

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

produtos *criaProduto(float valor,int codigo,char *nome){
	produtos *aux;
	aux = (produtos*) malloc(sizeof(produtos));
	aux->valor = valor;
	aux->codigo = codigo;
	strcpy(aux->nome,nome);
	aux->prox = NULL;
	return aux;
}

void inserirFim(float valor,int codigo,char *nome){
	produtos *aux,*p;
	p = criaProduto(valor,codigo,nome);
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

void exibirProdutos(){
	if(listaVazia() == 1){
		printf("\nLista Vazia!");
	}else{
		produtos *aux;
		aux = inicioLista;
		while(aux != NULL){
			printf("\nNome do produto : %s",aux->nome);
			printf("\nValor : %.2f",aux->valor);
			printf("\nCódigo : %d",aux->codigo);
			aux = aux->prox;
		}
	}
}


void buscarProduto(int codigo){
	produtos *aux;
	if(listaVazia() == 1){
		printf("\nLista Vazia!");
	}else{
		aux = inicioLista;
		while(aux !=NULL){
			if(aux->codigo == codigo){
				printf("\nProduto encontrado com sucesso!");
				printf("\nNome: %s",aux->nome);
				printf("\nPreço: %f",aux->valor);
				printf("\nCódigo: %d",aux->codigo);
			}
				aux = aux->prox;
		}
		
	}
}

void removerProduto(int codigo){
	produtos *aux = inicioLista;
	produtos *anterior = NULL;
	
	if(listaVazia() == 1){
		printf("\nLista de produtos vazia!");
	}else{
		while((aux != NULL) && (aux->codigo != codigo)){
			anterior = aux;
			aux = aux->prox;
		}
		if(aux == NULL){
			printf("\nElemento não encontrado");
		}else{
			if(anterior == NULL){
				inicioLista = aux->prox;
				printf("\nProduto removido com sucesso");
			}else{
				anterior->prox = aux->prox;
				free(aux);
				printf("\nProduto removido com sucesso");
			}
		}
		
	}
}

int main(){
	setlocale(LC_ALL,"");
	int op,codigo;
	float valor;
	char nome[20];
	//char nomeProd[20];
	
	inicializaLista();
	
	
	do{
		printf("\n1-Cadastrar produto");
		printf("\n2-Exibir produtos");
		printf("\n3-Buscar produto:");
		printf("\n4-Remover produto");
		printf("\n5-Sair");
		printf("\nInforme sua opção :");
		scanf("%d",&op);
		
		switch(op){
			case 1:
				int op2;
				printf("\nDigite o nome do produto: ");
				fflush(stdin);
				gets(nome);
				printf("Digite o preço do produto :");
				scanf("%f",&valor);
				printf("Digite o código do produto :");
				scanf("%d",&codigo);
				
				
				inserirFim(valor,codigo,nome);
				
				
			break;
			
			case 2:
				exibirProdutos();
				
				
			break;
			
			case 3:
				printf("\nDigite o código do produto que deseja buscar :");
				scanf("%d",&codigo);
				buscarProduto(codigo);
			break;
			case 4:
				printf("\nDigite o código do produto que deseja remover :");
				scanf("%d",&codigo);
				removerProduto(codigo);
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
