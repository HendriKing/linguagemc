#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Exemplo do uso dos operadores lógicos
	@autor Hendrik Vincius
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	//Variáveis
	int idade;
	printf("Verificar obrigatoriedade de votar\n\n");
	//Entrada
	printf("Digite a sua idade: ");
	scanf("%d",&idade);
	//Processamento / Saída
	if (idade < 16){
		printf("PROIBIDO VOTAR\n");
	} else if (idade > 17 && idade < 71){
		printf("VOTO OBRIGATORIO\n");
	} else {
		printf("VOTO FACULTATIVO\n");
	}
	
	/*	//Variáveis
	int idade;
	printf("Verificar obrigatoriedade de votar\n\n");
	//Entrada
	printf("Digite a sua idade: ");
	scanf("%d",&idade);
	//Processamento / Saída
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
