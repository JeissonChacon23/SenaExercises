#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main() {
         //construya un diagrama de flujo que calcule la distancia entre dos puntos. Dado como datos las coordenadas de los puntos Pl y P2.
            int distancia;
            int p1[2];
            p1[0] = 2;
            p1[1] = 2;
            int p2[2];
            p2[0] = 2;
            p2[1] = 4;
            distancia = sqrt(((p2[0] - p1[0]) * 2 ) + ((p2[1] - p1[1]) * 2));
            printf("Distancia %d",distancia);



            int medida[5];
            medida[0] = 2;
            medida[1] = 5;
            medida[2] = 3;
            medida[3] = 6;
            medida[4] = 7;
            //medida[5] = 10; Esta no la acepta ya que se sale del tama;o asignado del vector 
         }