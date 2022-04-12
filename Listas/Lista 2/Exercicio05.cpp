#include<stdio.h>
#include<locale.h>
#define max 20

/*Em uma escola é necessário armazenar os dados de diversos alunos.
 Suponha uma turma com 20 alunos e que os dados de cadastro desejados são: nome, 
 matrícula, quatro notas e a média final.*/
 

 typedef struct aln{
 	
 	char nome[50];
 	char matricula[50];
 	float n1,n2,n3,n4,media;
 	
 }aln;
 
 int opcao;
 void menu(){
 	
 	printf("Escolha a opção desejada :\n");
	printf("1 - Cadastrar Alunos\n");
	printf("2 - Exibir dados de todos os alunos da turma\n");
	printf("3 - Exibir dados do(s) aluno(s) com maior média\n");
	printf("4 - Sair\n");
	scanf("%d",&opcao);
 	
 }
 
 int main(){
 	setlocale(LC_ALL,"");
 	
 	aln alunos[max];
 	int i;
 	float maior;
 	
 	menu();
 	/*printf("Escolha a opção desejada :\n");
	printf("1 - Cadastrar Alunos\n");
	printf("2 - Exibir dados de todos os alunos da turma\n");
	printf("3 - Exibir dados do(s) aluno(s) com maior média\n");
	printf("4 - Sair\n");
	scanf("%d",&opcao);*/
	
	if(opcao == 1){
		for(i = 0;i < max;i++){
			
 		printf("%dº aluno: \n",i + 1);
 		printf("Digite o nome do aluno : \n");
 		fflush(stdin);
 		gets(alunos[i].nome);
 		printf("Digite a matrícula do aluno : \n");
 		fflush(stdin);
 		gets(alunos[i].matricula);
 		printf("Digite a 1º nota : \n");
 		scanf("%f",&alunos[i].n1);
 		printf("Digite a 2º nota : \n");
 		scanf("%f",&alunos[i].n2);
 		printf("Digite a 3º nota : \n");
 		scanf("%f",&alunos[i].n3);
 		printf("Digite a 4º nota : \n");
 		scanf("%f",&alunos[i].n4);
 		
 		alunos[i].media = alunos[i].media + (alunos[i].n1 + alunos[i].n2 + alunos[i].n3 + alunos[i].n4) / 4;
 		
 		menu();
 		
	 }
	 
	}
	if(opcao == 2){
	 	for(i = 0;i < max;i++){
	 		printf("%dº Aluno:\n");
	 		printf("Nome: %s\n",alunos[i].nome);
	 		printf("Matrícula : %s\n",alunos[i].matricula);
	 		printf("1º nota : %2.f \n",alunos[i].n1);
	 		printf("2º nota : %2.f \n",alunos[i].n2);
	 		printf("3º nota : %2.f \n",alunos[i].n3);
	 		printf("4º nota : %2.f \n",alunos[i].n4);
	 		printf("Média : %2.f \n",alunos[i].media);
		 }
	 }
	 if(opcao == 3){
	 	for(i = 0;i<max;i++){
	 		if(maior < alunos[i].media){
	 			maior = alunos[i].media;
	 			
			 } 
		 }
		 for(i = 0;i<max;i++){
		 	if(maior == alunos[i].media){
		 	printf("Aluno com a maior média :\n");
		printf("Nome: %s\n",alunos[i].nome);
		printf("Matrícula : %s\n",alunos[i].matricula);
		 printf("1º nota : %2.f \n",alunos[i].n1);
	 	printf("2º nota : %2.f \n",alunos[i].n2);
	 	printf("3º nota : %2.f \n",alunos[i].n3);
	 	printf("4º nota : %2.f \n",alunos[i].n4);
	 	printf("Média : %2.f \n",alunos[i].media);
			 }
		 }
		 
		 
	 	
	 }
	 if(opcao == 4){
	 	printf("Encerrando...");
	 	
	 }
	 if(opcao <= 0 || opcao > 4){
	 	printf("Opção inválida!");
	 }
 	
 	
 }
