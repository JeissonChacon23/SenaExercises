#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main() {
            //19.) La cervezaくくSin alcohol” tiene hasta un l % de alcohol. Calcula que cantidad de cerveza <Sin alcohol≫ 
            //debe beber una persona para consumir 25 mL de alcohol.
                double cantidadML = 355;
                double alcohol = cantidadML * 0.01;
                double cervezas = 25 / alcohol;
                printf("Tamanio: %.2fml\nPorcentaje 1: %.2fml\nCantidad: %.2f Cervezas", cantidadML, alcohol, cervezas);
         }