#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<ctype.h>
/*Faça programa que leia uma string e um caractere. Em seguida, o programa deve:
- Imprimir a string informada;
- Percorrer a string informada buscando por ocorrências do caractere lido e substituí-lo na string por *.
- Imprimir a string modificada.*/

int main(){
	setlocale(LC_ALL,"");
	
	char string[20],string2[20],letra;
	int i;
	
	printf("Por favor digite qualquer coisa:\n");
	fflush(stdin);
	gets(string);
	
	printf("Digite 1 caracter : \n");
	scanf("%c",&letra);
	
	strcpy(string2,string);
	
	for(i = 0;string[i]!='\0';i++){
		if(string[i] == letra){
			string[i] = '*';
		}
		
	}
	printf("String digitada : %s\n",string2);
	printf("String modificada : %s",string);
	
}
