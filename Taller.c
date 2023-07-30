#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main() {
         // En una empresa que fabrica 3 tipos de productos (A, B, C) se cuenta con la colaboración de 3 empleados (E1, E2, E3) 
         //para la evaluaci6n de los mismos. Los tiempos que cada empleado demora en la elaboración de un artículo de cada tipo de producto 
         //se dan en la siguiente tabla en minutos:
            int empleado = 1;
            int productoA;
            int productoB;
            int productoC;
            int tiempo;

            if(empleado == 1){
                productoA = 12;
                productoB = 13;
                productoC = 7;
                tiempo = productoA + productoB + productoC;
                printf("Al empleado %d le toma %d minutos la elaboracion de los articulos\n",empleado, tiempo);
            }
            empleado = 2;
            if(empleado == 2){
                productoA = 9;
                productoB = 15;
                productoC = 17;
                tiempo = productoA + productoB + productoC;
                printf("Al empleado %d le toma %d minutos la elaboracion de los articulos\n",empleado, tiempo);
            }
            empleado =3;
            if(empleado == 3){
                productoA = 15;
                productoB = 8;
                productoC = 6;
                tiempo = productoA + productoB + productoC;
                printf("Al empleado %d le toma %d minutos la elaboracion de los articulos\n",empleado, tiempo);
            }
         }