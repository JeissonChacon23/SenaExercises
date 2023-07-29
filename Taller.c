#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main() {
         //Construya un diagrama de flujo tal que dados los datos, la base y la altura de un triangulo calcule el perímetro y la superficie del mismo
            int base = 5;
            int altura = 9;
            int perimetro = sqrt((base * base) +  (altura * altura));
            int superficie = (base * altura) / 2;
            printf(" Perimetro: %d\n Superficie: %d", perimetro, superficie);
         }