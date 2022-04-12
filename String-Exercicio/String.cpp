#include<stdio.h>
#include<locale.h>


/*Faça um programa que leia uma string (origem) de até 50 caracteres e faça uma cópia para outra string (destino).
 Ao final, o programa deve exibir as strings na tela.*/
 
 int main(){
 	setlocale(LC_ALL,"");
 	
 	char string[50],string2[50];
 	int i;
 	
 	printf("Por favor, digite qualquer coisa.\n");
 	gets(string);
 	
 	for(i = 0;string[i]!='\0';i++){
 		
 		string2[i] = string[i];
 		
	 }
	 
	 printf("String original : %s\n",string);
	 printf("\nString cópia : %s \n",string2);
 	
 }
