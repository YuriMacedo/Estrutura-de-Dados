#include<stdio.h>
#include<locale.h>
#define max 10
/*Fa�a um programa que preencha um vetor de 10 posi��es com n�meros inteiros, 
exiba todo o vetor informado e o maior valor encontrado nesse vetor.*/

int main(){
	setlocale(LC_ALL,"");
	int v1[max],i,maior;
	
	for(i = 0;i < max;i++){
		printf("Digite o %d� n�mero: \n",i + 1);
		scanf("%d",&v1[i]);
		
		if(v1[i] > maior){
			maior = v1[i];
			
		}
		
	}
	
	printf("\nMaior valor digitado no vetor : %d",maior);
}
