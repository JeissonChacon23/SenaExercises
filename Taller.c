#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main() {
         //Una persona compro una porci6n de tierra, 1a extensi6n de la tierra esta especificada en acres. Construya un diagrama de 
         //flujo tal que dado como dato la extensión del campo en acres・ Calcule e imprima la extensión del mismo en hectáreas. 
         //(1 acre es esquivamente a 4047 m2 y l hectárea tiene lOOOO m2 ).
            float acres = 2.3;
            float hectares = acres * 0.404686;
            printf("Hectareas: %f", hectares);
         }