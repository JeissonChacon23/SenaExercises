#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main() {
         // Construya un diagrama de flujo que resuelva el problema que tiene una gasolinera. 
         //Los surtidores de la misma registran lo que surten, en galones・Pero el precio de la gasolina está fijado en litros. 
         //El diagrama debe calcular e imprimir lo que hay que cobrarle al cliente. (1 galón equivale a 3,785 1itros).
           
            float galones = 3.5;
            float litros = galones * 3.785;
            float precio = 13660 / 3.785;
            float valorPagar = litros * precio;
            printf("Valor a pagar: %f",valorPagar);
         }