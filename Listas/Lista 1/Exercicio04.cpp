#include<stdio.h>
#include<locale.h>
#include<string.h>
/*Fa�a um programa em "C" que pregunta o nome, o endere�o, 
o telefone e a idade de uma pessoa e exibe uma string com a seguinte frase:
"Seu nome � ..., voc� tem ... anos, mora na rua ... e seu telefone � ... ."*/

int main(){
	setlocale(LC_ALL,"");
	
	char nome[50],endereco[50];
	int telefone,idade,i;
	
	printf("Digite o seu nome :\n");
	gets(nome);
	printf("\nDigite o seu endere�o :\n");
	gets(endereco);
	printf("Qual � o seu telefone? \n");
	scanf("%d",&telefone);
	printf("Quantos anos voc� tem? \n");
	scanf("%d",&idade);
	
	printf("\nSeu nome � %s, voc� tem %d anos,mora na rua %s e seu telefone � %d",nome,idade,endereco,telefone);
	
	
}
