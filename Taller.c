#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main() {
         // En una empresa que fabrica 3 tipos de productos (A, B, C) se cuenta con la colaboración de 3 empleados (E1, E2, E3) 
         //para la evaluaci6n de los mismos. Los tiempos que cada empleado demora en la elaboración de un artículo de cada tipo de producto 
         //se dan en la siguiente tabla en minutos:
            int empleado = 1;
            int productoA = 23;
            int productoB = 42;
            int productoC = 91;
            int tiempoA;
            int tiempoB;
            int tiempoC;
            int tiempoTotal;

            if(empleado == 1){
                tiempoA = 12;
                tiempoB = 13;
                tiempoC = 7;
                tiempoTotal = tiempoA + tiempoB + tiempoC;
                tiempoTotal = (productoA * tiempoA) + (productoB * tiempoB)+ (productoC * tiempoC);
                printf("Al empleado %d le toma %d minutos la elaboracion de los articulos\n",empleado, tiempoTotal);
            }
            empleado = 2;
            if(empleado == 2){
                tiempoA = 9;
                tiempoB = 15;
                tiempoC = 17;
                tiempoTotal = tiempoA + tiempoB + tiempoC;
                tiempoTotal = (productoA * tiempoA) + (productoB * tiempoB)+ (productoC * tiempoC);
                printf("Al empleado %d le toma %d minutos la elaboracion de los articulos\n",empleado, tiempoTotal);
            }
            empleado =3;
            if(empleado == 3){
                tiempoA = 15;
                tiempoB = 8;
                tiempoC = 6;
                tiempoTotal = tiempoA + tiempoB + tiempoC;
                tiempoTotal = (productoA * tiempoA) + (productoB * tiempoB)+ (productoC * tiempoC);
                printf("Al empleado %d le toma %d minutos la elaboracion de los articulos\n",empleado, tiempoTotal);
            }
         }