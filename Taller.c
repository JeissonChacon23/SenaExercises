#include<stdio.h>
#include<stdbool.h>
int main() {
         //Leer el radio de un circulo, calcular la superficie y longitud de la circunferencia.
         float radio = 4;
         float superficie = 3.1416 * (radio * radio);
         float circunferencia = 2 * 4.1416 * radio;

         printf(" Radio: %f \n Superficie: %f \n Circunferencia: %f",radio, superficie, circunferencia);
 }