/*Implemente um programa que leia três variáveis do tipo inteiro (x1, x2 e x3 – com valores distintos) e 
ordene os valores de forma crescente nas variáveis. Ao final, o programa deve exibir as variáveis x1, x2 e x3 de modo que 
apareça em ordem crescente.
Para isso, você deve implementar dois procedimentos:
- procedimento troca, que recebe ponteiros para dois elementos inteiros e troca os valores entre eles;
- procedimento ordena, que recebe três variáveis por referência e as ordena de modo crescente, 
utilizando o procedimento de troca quando necessário.*/
#include<stdio.h>
#include<locale.h>


void troca(int *elem,int *elem2){
	int aux;
	if(*elem > *elem2){
		aux = *elem;
		*elem = *elem2;
		*elem2 = aux;
	}
	
}

void ordena(int n1,int n2,int n3){
			
			troca(&n1,&n2);
			troca(&n2,&n3);
			troca(&n1,&n3);
			troca(&n2,&n3);
			troca(&n1,&n2);
			
			
			printf("Valores : %d %d %d\n",n1,n2,n3);
		
	
}

int main(){
	int x1,x2,x3;
	printf("Digite o valor de x1 :\n");
	scanf("%d",&x1);
	printf("Digite o valor de x2 :\n");
	scanf("%d",&x2);
	printf("Digite o valor de x3 :\n");
	scanf("%d",&x3);
	
	
	ordena(x1,x2,x3);
	
	
}
