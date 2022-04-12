/*Foi realizada uma pesquisa de algumas características físicas de 20 habitantes de uma certa região.
 De cada habitante foram coletados os seguintes dados: sexo (1- f, 2- m, 3- Outro),
  cor dos olhos (1- azuis, 2- verdes ou 3- castanhos), cor dos cabelos (1- louros, 2- pretos ou 3- castanhos) e idade.
Faça um programa que leia esses dados em um vetor de registro. Além disso, implemente uma função que receba o vetor de registro definido por parâmetro,
 e retorna a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 (inclusive) e que tenham olhos verdes e cabelos louros.
 A função deve ser chamada após a leitura dos dados e o resultado deve ser exibido.*/
 
 #include<stdio.h>
 #include<locale.h>
 #define max 3
 
 typedef struct habitante{
 	int sexo;
 	int olhos;
 	int cabelos;
 	int idade;
 	
 }habitante;
 
 int contMulherVerdeLoura(habitante *hab){
 	int cont = 0,i;
 	for(i = 0;i < max;i++){
 		if((hab[i].olhos == 2) && (hab[i].sexo == 1) && (hab[i].cabelos == 1) && (hab[i].idade >=18 || hab[i].idade <= 35)){
 			cont++;
		 }
	 }
	 return cont;
 	
 }
 
 void lerVetor(habitante *hab){
 	int i,op;
 	
 	printf("\nPreenchimento de dados:\n");
 	printf("Escolha entre 1,2, ou 3 como opções\n");
 	for(i = 0;i < max;i++){
 		
 		printf("Digite os dados do %dº habitante : \n",i + 1);
 		
 		do{
 			printf("Escolha o sexo: \n 1-Feminino\n 2-Masculino\n 3- Outro\n");
 			scanf("%d",&op);
 			if(op < 1 || op > 3){
 				printf("opção inválida, por favor tente novamente!");
			 }else{
			 	printf("Cadastrado com Sucesso!");
			 	hab[i].sexo = op; 
			 }
 			
		 }while(op < 1 || op > 3);
		 
		 do{
		 	printf("\nEscolha a cor dos olhos :\n 1- Azuis\n 2- Verdes\n 3- Castanhos");
		 	scanf("%d",&op);
		 	if(op < 1 || op > 3){
		 		printf("Opção inválida, por favor tente novamente!");
			 }else{
			 	printf("Cadastrado com Sucesso!");
			 	hab[i].olhos = op;
			 }
			 
		 }while(op < 1 || op > 3);
		 
		 do{
		 	printf("\nEscolha a cor dos cabelos : \n 1-Louros\n 2- Pretos \n 3- Castanhos\n");
		 	scanf("%d",&op);
		 	if(op < 1 || op > 3){
		 		printf("Opção inválida, por favor tente novamente!");
			 }else{
			 	printf("Cadastrado com Sucesso!");
			 	hab[i].cabelos = op;
			 }
		 }while(op < 1 || op > 3);
		 
		 printf("Por favor digite a idade do habitante :\n");
		 scanf("%d",&hab[i].idade);
 		
	 }
 }
 
 int main(){
 	int opcao;
 	setlocale(LC_ALL,"");
 	
 	habitante hab[max];
 	
 	lerVetor(hab);
 	printf("%d mulheres foram registradas com essas características :",contMulherVerdeLoura(hab));
 	
 }
