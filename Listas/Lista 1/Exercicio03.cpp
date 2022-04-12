#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>


/*Faça um programa em "C" que lê uma string qualquer de no máximo 80 caracteres e imprime:
- Quantos caracteres tem a string;
- Quantos caracteres são números;
- Quantos caracteres são minúsculas.*/

int main(){
	setlocale(LC_ALL,"");
	
	char string[80];
	int tamanho,numero =0,minusculas,i;
	
	
	printf("Escreva qualquer coisa: ");
	gets(string);
	
	tamanho = strlen(string);

	
	
	for(i = 0;string[i]!='\0';i++){
		minusculas = (minusculas + islower(string[i])/ 2 );
	
		
		
	}
	
	
	printf("A String possuí %d caracteres\n",tamanho);
	printf("Número de letras minúsculas digitadas : %d \n",minusculas);

	
	
	
}

