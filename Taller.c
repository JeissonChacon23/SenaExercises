#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main() {
         //Construya un df que resuelva el problema que tienen en una gasolinera los surtidores de la misma registran lo que surten en galones, pero el precio de la gasolina está fijado en litros. El df debe calcular e imprimir lo que hay que cobrarle al cliente.
            float galones = 3.5;
            float precioGalonGasolina = 13660;
            float precioCliente = galones * precioGalonGasolina;
            printf("Valor a Pagar: %f",precioCliente);
         }