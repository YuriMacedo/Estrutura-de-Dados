#include<stdio.h>
#include<locale.h>
#define max 10

int fatorial(int x){
	int i,f = 1;
	for(i = 1;i <= x;i++){
		f = f * i;
	}
	return f;
}

int main(){
	setlocale(LC_ALL,"");
	int v1[max],v2[max],i,j;
	
	for(i = 0;i < max;i++){
		printf("Digite o %dº valor do vetor: \n",i + 1);
		scanf("%d",&v1[i]);
		
		if(v1[i] < 0){
			printf("\nNúmero digitado inválido(negativo),por favor digite novamente :\n ");
			i--;
		}
		
	}
	
	for(i = 0;i < max;i++){
		v2[i] = fatorial(v1[i]);
	}
	printf("1º vetor :" );
	for(i = 0;i < max;i++){
		printf("%d ",v1[i]);
	}
	printf("\n2º vetor :" );
	for(i = 0;i < max;i++){
		printf("%d ",v2[i]);
	}
	
	
}
