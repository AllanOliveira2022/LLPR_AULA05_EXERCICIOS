#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	float n1,n2,soma,mult,divi,sub;
	printf("CALCULAR AS QUATRO OPERA��ES DOS N�MEROS DIGITADO : \n");
	
	printf("Digite o primeiro n�mero : \n");
	scanf("%f", &n1);
	
	printf("Digite o segundo n�mero : \n");
	scanf("%f", &n2);

	//opera��es
	soma = n1 + n2;
	
	mult = n1 * n2;
	
	divi = n1 / n2;
	
	sub = n1 - n2;
	
	printf("A soma de %.2f e %.2f � : %.2f \n",n1,n2,soma);
	printf("A multiplica��o de %.2f e %.2f � : %.2f \n",n1,n2,mult);
	printf("A divis�o de %.2f e %.2f � : %.2f \n",n1,n2,divi);
	printf("A subtra��o de %.2f e %.2f � : %.2f \n",n1,n2,sub);
	
	return 0;
}

