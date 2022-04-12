#include<stdio.h>
#define max 3
#include<locale.h>

/*Faça um programa que preencha uma matriz M, 3x3. Em seguida,
o programa deve calcular e mostrar a matriz R, 
resultante da multiplicação dos elementos de M pelo maior elemento informado.*/

int main(){
	setlocale(LC_ALL,"");
	int m[max][max],r[max][max],i,j,maior;
	
	for(i = 0;i <max;i++){
		for(j = 0;j < max;j++){
			printf("Digite o valor da coordenada [%d] [%d] :\n",i +1,j+1);
			scanf("%d",&m[i][j]);
			
			if(m[i][j] > maior){
				maior = m[i][j];		
			}	
		}	
	}
	printf("\nMatriz multiplicada por %d\n",maior);
	
	for(i = 0;i <max;i++){
		for(j = 0;j < max;j++){
			r[i][j] = m[i][j] * maior;
			printf("%d ",r[i][j]);
		}
		printf("\n");
	}
	
	
} 
