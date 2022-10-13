#include <stdio.h>
#include <locale.h>

int main(){
         setlocale(LC_ALL, "portuguese_brazil");
         float base,altura,area;

         printf("CALCULAR A ÁREA DO TRIÂNGULO: \n " );
         printf("Digite a base do triângulo (cm): \n ");
         scanf("%f", &base);

         printf(" Digite a altura do triângulo (cm): \n ");
         scanf("%f", &altura);

         area = (base * altura) / 2 ;

         printf("A área do triângulo dado é : %.2f cm", area);

return 0;

}


