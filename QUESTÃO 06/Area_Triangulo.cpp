#include <stdio.h>
#include <locale.h>

int main(){
         setlocale(LC_ALL, "portuguese_brazil");
         float base,altura,area;

         printf("CALCULAR A �REA DO TRI�NGULO: \n " );
         printf("Digite a base do tri�ngulo (cm): \n ");
         scanf("%f", &base);

         printf(" Digite a altura do tri�ngulo (cm): \n ");
         scanf("%f", &altura);

         area = (base * altura) / 2 ;

         printf("A �rea do tri�ngulo dado � : %.2f cm", area);

return 0;

}


