#include<stdio.h>
#include<locale.h>
#define max 50

/*Considere o desenvolvimento de um sistema para gerenciamento das lojas de
um shopping. Faça um programa em C para ler e manipular informações de cada
loja. Defina um vetor de registros de até 50 posições (utilize constantes) e faça
o cadastro enquanto o usuário desejar, respeitando o limite de lojas do shopping.
Ao final do cadastro, o programa deve exibir todos os dados das lojas
cadastradas. Os campos da estrutura são: CNPJ(long int), nome da loja,
proprietário e telefone.*/
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
		printf("%dº Loja ",i + 1);
		printf("Digite o nome da loja: \n");
		fflush(stdin);
		gets(reg[i].nomeLoja);
		printf("Digite o nome do proprietário : \n");
		fflush(stdin);
		gets(reg[i].proprietario);
		printf("Digite o CNPJ da loja :\n");
		scanf("%d",&reg[i].cnpj);
		printf("Digite o telefone: \n");
		scanf("%d",&reg[i].telefone);
		j++;
		printf("Deseja continuar registrando?\n Aperte -1 para finalizar o registro ou digite qualquer número para continuar \n");
		scanf("%d",&opcao);
		if(opcao == -1){
			break;
		}
		
		
	}
	printf("Lojas cadastradas: \n");
	for(i = 0;i < j;i++){
		printf("%dº loja\n",i + 1);
		printf("\n");
		printf("Nome da Loja: %s\n",reg[i].nomeLoja);
		printf("\n");
		printf("Propietário : %s\n",reg[i].proprietario);
		printf("\n");
		printf("CNPJ : %d\n",reg[i].cnpj);
		printf("\n");
		printf("Telefone: %d\n",reg[i].telefone);
		
	}
	
	
}
