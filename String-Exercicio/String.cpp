#include<stdio.h>
#include<locale.h>


/*Fa�a um programa que leia uma string (origem) de at� 50 caracteres e fa�a uma c�pia para outra string (destino).
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
	 printf("\nString c�pia : %s \n",string2);
 	
 }
