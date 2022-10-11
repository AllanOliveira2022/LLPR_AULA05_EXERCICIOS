#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	float peso,altura,imc;
	
	printf("CALCULAR SEU IMC : \n");
	
	printf("Digitesua altura em Metros (m) : \n");
	scanf("%f", &altura);
	
	printf("Digite seu peso em quilos (Kg) : \n");
	scanf("%f", &peso);
	
	imc = peso / (pow(altura,2));
	
	printf("O seu IMC é aproximadamente : %.3f",imc);
	
		
	return 0;
}

