#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Exemplo do uso dos operadores l�gicos
	@autor Hendrik Vincius
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	//Vari�veis
	int idade;
	printf("Verificar obrigatoriedade de votar\n\n");
	//Entrada
	printf("Digite a sua idade: ");
	scanf("%d",&idade);
	//Processamento / Sa�da
	if (idade < 16){
		printf("PROIBIDO VOTAR\n");
	} else if (idade > 17 && idade < 71){
		printf("VOTO OBRIGATORIO\n");
	} else {
		printf("VOTO FACULTATIVO\n");
	}
	
	/*	//Vari�veis
	int idade;
	printf("Verificar obrigatoriedade de votar\n\n");
	//Entrada
	printf("Digite a sua idade: ");
	scanf("%d",&idade);
	//Processamento / Sa�da
	if (idade < 16){
		printf("PROIBIDO VOTAR\n");
	} else if (idade < 18){
		printf("VOTO FACULTATIVO\n");
	} else if (idade < 71){
		printf("VOTO OBRIGATORIO\n");
	} else {
		printf("VOTO FACULTATIVO\n");
	}
	*/
	system("pause");
	return 0;
}
