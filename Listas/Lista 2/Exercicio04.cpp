#include<stdio.h>
#include<locale.h>

/*Elabore um programa que leia v�rios registros de animais contendo os dados:
nome, ra�a, data de nascimento e sexo. Os registros devem ser lidos enquanto o
usu�rio desejar. O m�ximo de animais cadastrados � 50. Ao final, todos os registros
devem ser impressos.*/

typedef struct animal{
	char nome[50];
	char raca[50];
	char sexo[20];
	char dataNasci[10];
	
}animal;

int main(){
	setlocale(LC_ALL,"");
	animal anima[50];
	int i;
	char opcao;
	
	printf("Deseja iniciar o programa?");
	scanf("%c",&opcao);
	if(opcao == 'n' || opcao == 'N'){
		printf("Encerrando...");
	
	}
	if(opcao =='s' || opcao == 'S'){
		while(opcao =='s' || opcao == 'S'){
		printf("Digite o nome do animal: \n");
		fflush(stdin);
		gets(anima[i].nome);
		printf("Digite a ra�a: \n");
		fflush(stdin);
		gets(anima[i].raca);
		printf("Digite o sexo do animal: \n");
		fflush(stdin);
		gets(anima[i].sexo);
		printf("Digite a data de nascimento: \n");
		fflush(stdin);
		gets(anima[i].dataNasci);
		
		printf("Deseja continuar o cadastramento de animais?Responda com s ou n \n ");
		fflush(stdin);
		scanf("%c",&opcao);
		if(opcao == 'n' || opcao == 'N'){
			printf("Encerrando...");
			
		}
			i++;
		}
	}
			
		
		
	
	
	
	
	
}
