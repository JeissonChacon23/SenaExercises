#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main() {
         //Dada la estabilidad económica que existe en un país de Latinoam6rica, las agencias automotrices comienzan a ofrecer 
         //distintos planes de financiamiento para la comercializaci6n de sus vehículos. 
         //La empresa XGW ofrece el siguiente plan de financiaci6n, dado el monto total del vehículo, 
         //el cliente debe pagar e1 35 %del enganche y el resto en 18 mensualidades iguales sin intereses. 
         //Construya el diagrama de flujo que permita obtener cual es el importe del enganche y las mensualidades que debe pagar el cliente.
            int montoTotal = 204000000;
            int pagoEnganche = montoTotal * 0.35;
            int mensualidad = (montoTotal - pagoEnganche) / 18;
            printf("Monto Total: %d\nPago Enganche: %d\nMensualidad: %d",montoTotal, pagoEnganche,mensualidad);
         }