#include <stdio.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL, "portuguese_brazil");
   int valor,resto;
   
   printf("CALCULE QUANTO VOCÊ VAI PERDER DE TROCO : \n");
   
   printf("Digite o valor que você deseja colocar (multiplo de 5) : \n");
   scanf("%d", &valor);
   
   resto = valor % 7;
   
   printf("Você vai perder : %d",resto);
 		  
   return 0;

}
