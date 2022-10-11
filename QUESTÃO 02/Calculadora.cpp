#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	float n1,n2,soma,mult,divi,sub;
	printf("CALCULAR AS QUATRO OPERAÇÕES DOS NÚMEROS DIGITADO : \n");
	
	printf("Digite o primeiro número : \n");
	scanf("%f", &n1);
	
	printf("Digite o segundo número : \n");
	scanf("%f", &n2);

	//operações
	soma = n1 + n2;
	
	mult = n1 * n2;
	
	divi = n1 / n2;
	
	sub = n1 - n2;
	
	printf("A soma de %.2f e %.2f é : %.2f \n",n1,n2,soma);
	printf("A multiplicação de %.2f e %.2f é : %.2f \n",n1,n2,mult);
	printf("A divisão de %.2f e %.2f é : %.2f \n",n1,n2,divi);
	printf("A subtração de %.2f e %.2f é : %.2f \n",n1,n2,sub);
	
	return 0;
}

