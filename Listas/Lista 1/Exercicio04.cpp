#include<stdio.h>
#include<locale.h>
#include<string.h>
/*Faça um programa em "C" que pregunta o nome, o endereço, 
o telefone e a idade de uma pessoa e exibe uma string com a seguinte frase:
"Seu nome é ..., você tem ... anos, mora na rua ... e seu telefone é ... ."*/

int main(){
	setlocale(LC_ALL,"");
	
	char nome[50],endereco[50];
	int telefone,idade,i;
	
	printf("Digite o seu nome :\n");
	gets(nome);
	printf("\nDigite o seu endereço :\n");
	gets(endereco);
	printf("Qual é o seu telefone? \n");
	scanf("%d",&telefone);
	printf("Quantos anos você tem? \n");
	scanf("%d",&idade);
	
	printf("\nSeu nome é %s, você tem %d anos,mora na rua %s e seu telefone é %d",nome,idade,endereco,telefone);
	
	
}
