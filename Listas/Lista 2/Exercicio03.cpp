#include<stdio.h>
#include<locale.h>

/*Escreva um programa que leia uma matriz 3x3 e armazene em um vetor a soma
dos elementos por coluna.*/

int main(){
	setlocale(LC_ALL,"");
	int mat[3][3],soma[3],i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite o valor da coordenada [%d][%d] :",i+1,j+1);
			scanf("%d",&mat[i][j]);
			soma[i] = 0;
			
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			soma[i] = soma[i] + mat[j][i];
		}
	}
	
	printf("Soma das Colunas :\n");
	for(i = 0;i< 3;i++){
		printf("%d \n",soma[i]);
	}
	
	for(i = 0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
}
