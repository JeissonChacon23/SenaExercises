#include<stdio.h>
#include<stdbool.h>
int main() {
         //Construye un diagrama de flujo tal que dados los datos enteros A y B escriba el resultado de la siguiente expresión. ((A + B) ^ 2) / 3
            int a = 4;
            int b = 7;
            int solucionExpresion = ((a + b) * (a + b)) / 3;
            printf("Solucion: %d\n",solucionExpresion);
         }