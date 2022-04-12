/*1. Faça um programa para ler um conjunto de números inteiros,
 armazenando-o em vetor e calcular a soma de todos os valores 
armazenados. Os conjuntos têm 10 elementos cada. 
Ao final, o programa deve exibir todos os valores do vetor e o somatório calculado.
OBS.:
- O vetor deve ser declarado como uma variável local, dentro do main;
- Os dados do vetor devem ser lidos por um procedimento de leitura, aplicando corretamente o uso de passagem de parâmetros;
- A impressão dos dados deve ser feita por um procedimento e chamada no main para que seja executada.*/

#include<stdio.h>
#include<locale.h>
#define max 10

void lerVetor(int *v1,int n){
	
	for(int i = 0;i < n;i++){
		printf("Digite o %dº valor do vetor: \n",i + 1);
		scanf("%d",&v1[i]);
	}
}

int somaVetor(int *v1,int n){
	int soma = 0,i;
	for(i = 0;i < n;i++){
		soma = soma + v1[i];
	}
	return soma;
	
}
void mostrarVetor(int *v1,int n){
	int i;
	for(i = 0; i < n;i++){
		printf("%d ",*v1);
	}
}

int main (){
	setlocale(LC_ALL,"");
	int v1[max];
	
	lerVetor(v1,max);
	printf("\nNúmeros adicionados no vetor :\n");
	mostrarVetor(v1,max);
	printf("\nSoma dos números no vetor : %d\n",somaVetor(v1,max));
}
