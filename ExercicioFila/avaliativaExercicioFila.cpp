#include <stdio.h>
#define m 10


void enfileirar(int *inicio, int *fim, int *fila){
	int valor;
    
    if(*fim == m-1)
		return;
		
    printf("\nInforme um valor : ");
	scanf("%d",&valor);
	
	(*fim)++;
	
	fila[*fim] = valor;
	
	if(*inicio == -1)
		(*inicio)++;
	
	enfileirar(inicio, fim, fila);
}

void desenfileirar(int inicio, int *fila, int *filaAux){
	
	filaAux[inicio] = fila[inicio];
    
	if(inicio == m - 1)
	    return;
		
	desenfileirar(++inicio, fila, filaAux);
}

void inverterValoresFila(int inicio, int fim, int *fila, int *filaAux){
	
	if (fim == -1)
        return;
    
    fila[inicio] = filaAux[fim];

    inverterValoresFila(++inicio, --fim, fila, filaAux);
}

void lerVetor(int *fila){
	for(int i = 0; i < m; i++)
        printf("%d ", fila[i]);
        
    	printf("\n");
}



int main(){
	int fila[m];
    int filaAux[m];
    int inicio = -1;
    int fim = -1;
    
	enfileirar(&inicio, &fim, fila);
    lerVetor(fila);
    desenfileirar(inicio, fila, filaAux);
    inverterValoresFila(inicio, fim, fila, filaAux);
    lerVetor(fila);
	
}
