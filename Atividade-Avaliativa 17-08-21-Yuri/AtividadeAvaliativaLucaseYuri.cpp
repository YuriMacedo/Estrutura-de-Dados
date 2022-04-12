#include<stdio.h>
#include<locale.h>
#define max 50

/*Considere o desenvolvimento de um sistema para gerenciamento das lojas de
um shopping. Fa�a um programa em C para ler e manipular informa��es de cada
loja. Defina um vetor de registros de at� 50 posi��es (utilize constantes) e fa�a
o cadastro enquanto o usu�rio desejar, respeitando o limite de lojas do shopping.
Ao final do cadastro, o programa deve exibir todos os dados das lojas
cadastradas. Os campos da estrutura s�o: CNPJ(long int), nome da loja,
propriet�rio e telefone.*/
typedef struct registro{
	int cnpj;
	char nomeLoja[50];
	char proprietario[50];
	int telefone;
	
}registro;

int main(){
	setlocale(LC_ALL,"");
	registro reg[max];
	int i,j = 0;
	int opcao;
	
	for(i = 0;i<max;i++){
		printf("%d� Loja ",i + 1);
		printf("Digite o nome da loja: \n");
		fflush(stdin);
		gets(reg[i].nomeLoja);
		printf("Digite o nome do propriet�rio : \n");
		fflush(stdin);
		gets(reg[i].proprietario);
		printf("Digite o CNPJ da loja :\n");
		scanf("%d",&reg[i].cnpj);
		printf("Digite o telefone: \n");
		scanf("%d",&reg[i].telefone);
		j++;
		printf("Deseja continuar registrando?\n Aperte -1 para finalizar o registro ou digite qualquer n�mero para continuar \n");
		scanf("%d",&opcao);
		if(opcao == -1){
			break;
		}
		
		
	}
	printf("Lojas cadastradas: \n");
	for(i = 0;i < j;i++){
		printf("%d� loja\n",i + 1);
		printf("\n");
		printf("Nome da Loja: %s\n",reg[i].nomeLoja);
		printf("\n");
		printf("Propiet�rio : %s\n",reg[i].proprietario);
		printf("\n");
		printf("CNPJ : %d\n",reg[i].cnpj);
		printf("\n");
		printf("Telefone: %d\n",reg[i].telefone);
		
	}
	
	
}
