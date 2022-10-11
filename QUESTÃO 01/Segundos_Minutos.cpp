#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	float min;
	int seg;
	
	printf("TRANSFORMAR MINUTOS EM SEGUNDOS \n ");
	printf("Digite o valor em minutos : \n");
	scanf("%f", &min);
	
	seg = min * 60;
	
	printf("%.1f Minutos é : %d segundos . \n",min,seg);
	
	
	
	return 0;
}

