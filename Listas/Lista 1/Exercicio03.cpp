#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>


/*Fa�a um programa em "C" que l� uma string qualquer de no m�ximo 80 caracteres e imprime:
- Quantos caracteres tem a string;
- Quantos caracteres s�o n�meros;
- Quantos caracteres s�o min�sculas.*/

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
	
	
	printf("A String possu� %d caracteres\n",tamanho);
	printf("N�mero de letras min�sculas digitadas : %d \n",minusculas);

	
	
	
}

