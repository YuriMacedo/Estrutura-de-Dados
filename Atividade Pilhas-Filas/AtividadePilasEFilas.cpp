#include <stdio.h>
#include <locale.h>
#define m 10



int filaVazia(int n){
	if(n == 0){
		return 1;
	}else{
		return 0;
	}
}

int filaCheia(int n){
	if(n == m){
		return 1;
	}else{
		return 0;
	}
}
void exibir(int n,int inicio,int fim,int *fila){
	int i;
	if(filaVazia(n)){
		printf("\nFila Vazia!");
	}else{
		for(i = n -1;i >=0 ;i--){
			printf("%d ",fila[i]);
		}
	}
}

void inserirFila(int valor,int *inicio,int *fim,int *n,int *fila){
	
	if(filaCheia(*n) == 1){
		printf("Fila cheia!");
	}else{
		if(*fim == m - 1){
			*fim = 0;
		}else{
			(*fim)++;
		}
		fila[*fim] = valor;
		if(*inicio == -1){
			(*inicio)++;
		}
		(*n)++;
		
	}
}

int removerFila(int *inicio,int *fim,int *n,int *fila){
	if(filaVazia(*n)){
		printf("Fila vazia!");
	}else{
		printf("\nValor Removido : %d\n",fila[*fim]);
		(*fim)--;
		if(*n == 1){
			*inicio = -1;
			*fim = -1;
		}else{
			if(*inicio == m -1){
				*inicio = 0;
			}else{
				(*inicio)++;
			}
		}
		(*n)--;
	}
	
}

int main(){
	setlocale(LC_ALL,"");
	int fila[m];
	int inicio,fim,n;
	int op;
	int valor;
	
	inicio = -1;
	fim = -1;
	n = 0;
	
	do{
		printf("\n 1-Inserir");
		printf("\n 2- Remover");
		printf("\n 3- Mostrar Fila");
		printf("\n 4 -Sair");
		printf("\nInforme sua opção :");
		scanf("%d",&op);
		
		switch(op){
			case 1:
				printf("\nInforme um valor : ");
				scanf("%d",&valor);
				inserirFila(valor,&inicio,&fim,&n,fila);
			
				break;
				case 2:
					removerFila(&inicio,&fim,&n,fila);
					
					break;
					case 3:
						exibir(n,inicio,fim,fila);
						break;
						case 4:
							printf("\nSaindo...");
							break;
							
						default:
						printf("\nNúmero Informado inválido!");
						
					
		}
		
	}while(op != 4);
}
