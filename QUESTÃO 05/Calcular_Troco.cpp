#include <stdio.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL, "portuguese_brazil");
   int valor,resto;
   
   printf("CALCULE QUANTO VOC� VAI PERDER DE TROCO : \n");
   
   printf("Digite o valor que voc� deseja colocar (multiplo de 5) : \n");
   scanf("%d", &valor);
   
   resto = valor % 7;
   
   printf("Voc� vai perder : %d",resto);
 		  
   return 0;

}
