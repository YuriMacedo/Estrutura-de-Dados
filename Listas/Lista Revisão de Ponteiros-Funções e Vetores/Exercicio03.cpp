/*Escreva um programa que receba um número inteiro representando a quantidade total de segundos e,
 usando passagem de parâmetros por referência, converta a quantidade informada de segundos em Horas,
  Minutos e Segundos. Imprima o resultado da conversão no formato HH:MM:SS. Utilize a seguinte função protótipo:
void converteHora (int total_segundos, int *hora, int *min, int *seg);*/
#include<stdio.h>
#include<locale.h>

void converteHora (int total_segundos, int *hora, int *min, int *seg){
	int minDiferenca;
	*hora = total_segundos/3600;//60 x 60 = 3600
	*min = total_segundos/60; // 1 min = 60 segs
	*seg = total_segundos % 60; //peguei o resto da divisão por 60
	printf("%d Segundos equivale a : %d:%d:%d segs ",total_segundos,*hora,*min,*seg);
	
}

int main (){
	int segTotal,hora,min,seg;
	printf("Digite uma quantidade de segundos: \n");
	scanf("%d",&segTotal);
	
	converteHora(segTotal,&hora,&min,&seg);
	
}
