#include<stdio.h>
#include<locale.h>

/*Escreva um programa que leia uma matriz 3x3 e armazene em um vetor a soma
dos elementos por linha.*/

int main(){
	setlocale(LC_ALL,"");
	int mat[3][3],i,j,soma[3];
	
	for(i = 0;i < 3;i++){
		for(j = 0;j < 3;j++){
			printf("Digite o %dº valor da linha na %dº coluna :\n",i + 1,j + 1);
			scanf("%d",&mat[i][j]);
			soma[i] = 0;
		}
	}
	
	for(i = 0;i < 3;i++){
		for(j = 0;j < 3;j++){
			soma[i] = soma[i] + mat[i][j];
		}
		printf("Soma da %dº linha : %d\n",i + 1,soma[i]);
	}
	
	for(i = 0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
	
}
