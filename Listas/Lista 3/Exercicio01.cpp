/*Desenvolva uma função ou procedimento para testar se uma pilha P1 tem mais elementos que uma pilha P2.
 Considere que P1 e P2 já existem.*/
 
 #include<stdio.h>
 #include<locale.h>
 #define max 10
 
 void comparar(int *p1,int *p2,int n1,int n2){
 	if(n1 > n2){
 		printf("\nA pilha 1 tem %d elementos a mais do que a pilha 2",(n1 - n2));
	 }
 }
 
 int main(){
 	int p1[max] = {1,2,3,4,5,6,7};
 	int p2[max] = {3,4,6,7};
 	
 	int n1 = {7};
 	int n2 = {4};
 	
 	comparar(p1,p2,n1,n2);
 	
 }
