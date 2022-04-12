#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct no{
	int cod;
	char nome[50];
	char unidade[50];
	char telefone[13];
	int  qtdeFunc;
	struct no* prox;
}no;

no* inicioL;

void cria_lista (){
	inicioL= NULL;
}

no* cria_no (no escola){
	no* aux;
	aux = (no*) malloc (sizeof(no));
 	if(aux!=NULL){
		aux->cod = escola.cod;
		strcpy(aux->nome,escola.nome);
 		strcpy(aux->unidade,escola.unidade);
 		strcpy(aux->telefone,escola.telefone);
 		aux->qtdeFunc = escola.qtdeFunc;
		aux -> prox = NULL;
	}
	return aux;
} 

int lista_vazia (){
	if (inicioL== NULL)
		return 1;
	return 0;
}

void leitura(no *escola){
	printf("\nCódigo da escola: ");
	scanf("%d",&escola->cod);
	printf("\nNome da escola: ");
	fflush(stdin);
	gets(escola->nome);
	printf("\nUnidade da escola: ");
	fflush(stdin);
	gets(escola->unidade);
	printf("\nTelefone do escola: ");
	fflush(stdin);
	gets(escola->telefone);
	printf("\nInforme a quantidade de funcionários da escola: ");
	scanf("%d",&escola->qtdeFunc);
}

void inserir_ini (no escola) {
	no *  aux = cria_no(escola);
	aux -> prox = inicioL;
	inicioL = aux;
}

void inserir_fim(no escola) {
	no *aux, *p;
	p = cria_no(escola);
	if (lista_vazia()){
		p->prox=inicioL;
		inicioL=p;
	}
	else{
		aux = inicioL;
		while (aux->prox != NULL)
			aux = aux -> prox;
		aux->prox = p;
	}
}

//função inserir_pos

void inserir_pos(no escola, int posicao){
	no *aux,*p;
	no *anterior = NULL;
	p = cria_no(escola);
	
	int i = 0;
	if(lista_vazia() == 1){
		  inicioL = p;
	}else{
		aux = inicioL;
		while((aux->prox != NULL) && (i <= posicao)){
			anterior = aux;
			aux = aux->prox;
			i++;
		}
			
		
		if(aux->prox == NULL){
			aux->prox = p;
		}else{
			
				anterior->prox = p;
				p->prox = aux;
				aux = p;
			
		}
		
		
	}
}

void maior(){
	int qtde;
	if(lista_vazia() == 1){
		printf("\nLista Vazia");
		
	
	}else{
		no *aux = inicioL;
		qtde = aux->qtdeFunc;
		
		while(aux->prox!= NULL){
			aux = aux->prox;
			if(qtde < aux->qtdeFunc){
				qtde = aux->qtdeFunc;
			}
		}
		printf("\nO maior n�mero de funcion�rios � : %d \n",qtde);
	}
}

void percorrer () {
	no * aux;
	aux = inicioL;
	if(!lista_vazia())
	{	
		printf("\n***Escolas***\n");
 		while (aux!= NULL) {
 			printf("Código da escola: %d\n",aux->cod);
			printf("Nome da escola: %s\n",aux->nome);
			printf("Unidade da escola: %s\n",aux->unidade);
			printf("Telefone da escola: %s\n",aux->telefone);
			printf("Quantidade de funcionários: %d\n\n",aux->qtdeFunc);
			aux = aux->prox;
    	}
    }
    else{
    	printf("\nLista vazia!\n");
	}
} 

void remover(int cod) {
	no *  aux; no* ant;
	ant = NULL;
	aux = inicioL;
	if (lista_vazia()){
		printf("\nLista vazia!\n");
		return;
	}
	while (aux!=NULL && aux->cod!=cod)
	{
		ant = aux;
		aux = aux -> prox;
	}
	
	if(aux==NULL){
		printf("\nEscola não existente!\n");
	}
	else{
		if (ant == NULL){
			inicioL =aux->prox;
		}
		else{
			ant -> prox = aux -> prox;
		}
		printf("\nRemoção efetuada com sucesso!\n");
		free(aux);	
	}
}

//procedimento exibeMaisFuncionarios

int main()
{
  int num;
  int op, pos, cod, p,posicao;
  no escola;
  cria_lista();
  do{
  	   printf("\nGerenciamento de escolas ***");
  	   printf("\n1- Cadastrar escola");
  	   printf("\n2- Exibir maior numero de funcionários");
  	   printf("\n3- Remover escola");
  	   printf("\n4- Imprimir lista de escolas");
  	   printf("\n5- Sair");   
       printf("\nInforme sua opção:");
       scanf("%d",&op);
       switch (op){
       		case 1:{
       			printf("\nEscolha o ponto da inserção:\n1-Fim\n2-Em posição específica\n");
       			scanf("%d",&pos);
       			leitura(&escola);
       			if(pos==1){
       					inserir_fim(escola);
				}
				else{
					if(pos==2){
						printf("\nInforme a posição onde deseja inserir: ");
						scanf("%d",&p);
						
						inserir_pos(escola,p);
						
					}
					else{
						printf("\nOpção inválida!\n");
					}
				}
				break;
			}
			case 2:{
				//chamada da função de Maior numero de funcionários	
			maior();	
				break;
			}
			case 3:{
				if (!lista_vazia()){
					printf("\nInforme o codigo da escola a ser removida: ");
					scanf("%d",&cod);
					remover(cod);
				}
				else{
					printf("\nLista vazia!\n");
				}
				break;
			}
			case 4:{
				percorrer();
				break;
			}
			case 5:{
				printf("\nSaindo...\n");
				break;
			}
			default:{
				printf("\nOpção inválida!\n");
				break;
			}
	   }
	system("Pause");
	system("CLS");	
  }while(op!=5);
	
}


