#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Cálculo do IMC
	@author Professor José de Assis
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	system("color 1F"); 
	printf("d888888b .88b  d88.  .o88b. \n");
	printf("  `88'   88'YbdP`88 d8P  Y8 \n");
	printf("   88    88  88  88 8P      \n");
	printf("   88    88  88  88 8b      \n");
	printf("  .88.   88  88  88 Y8b  d8 \n");
	printf("Y888888P YP  YP  YP  `Y88P' \n");
	printf("\n");
	//variáveis
	float imc,peso,altura;
	//entrada
	printf("Digite o seu peso em Kg: ");
	scanf("%f",&peso);
	printf("Digite a sua altura em metros: ");
	scanf("%f",&altura);
	//processamento
	imc = peso / (altura * altura);
	//saída
	printf("IMC: %.2f\n",imc);
	system("pause");
	return 0;
}
