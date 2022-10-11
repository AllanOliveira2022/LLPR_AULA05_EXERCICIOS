#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	float a,b,c,f1,f2,f3,f4;
	printf("CALCULAR AS QUATRO FÓRMULAS : \n");
	
	printf("Digite o primeiro valor : \n");
	scanf("%f", &a);
	
	printf("Digite o segundo valor : \n");
	scanf("%f", &b);
	
	printf("Digite o terceiro valor : \n");
	scanf("%f", &c);
	
	//calculando as fórmulas 
	
	//primeira fórmula
	f1 = (a * b) / c;
	
	//segunda fórmula
	f2 =  pow(a,2) + b + (5 * c);
	
	//terceira fórmula
	f3 = a * b * c + b + ((c / 3 ) * 5) - 1; 
	
	//quarta fórmula 
	f4 = pow((a * b * c), 3) / 2;
	
	printf("O resultado da primeira fórmula é : %.2f \n",f1);
	printf("O resultado da segunda fórmula é : %.2f \n",f2);
	printf("O resultado da terceira fórmula é : %.2f \n",f3);
	printf("O resultado da quarta fórmula é : %.2f \n",f4);
	
	
	
	return 0;
}

