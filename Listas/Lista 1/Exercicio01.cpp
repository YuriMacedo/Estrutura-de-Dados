#include<stdio.h>
#include<locale.h>
#include<math.h>

/*Fa�a um programa para ler um conjunto de n�meros reais, 
armazenando-o em vetor e calcular o quadrado das componentes deste vetor,
 armazenando o resultado em outro vetor.
 Os conjuntos t�m 10 elementos cada. Imprimir todos os conjuntos.*/

int main(){
	
	setlocale(LC_ALL,"");
	
	float vetor[10],vetor2[10];
	int i;
	
	for(i = 0;i < 10;i++){
		printf("Digite o %d� n�mero :\n",i + 1);
		scanf("%f",&vetor[i]);
		
		vetor2[i] = pow(vetor[i],2);
		
	}
	printf("\n1� vetor:\n");
	for(i = 0;i < 10;i++){
		printf("%1.f ",vetor[i]);
	}
	printf("\n2� vetor:\n");
	for(i = 0;i < 10;i++){
		printf("%1.f ",vetor2[i]);
	}
	
}
