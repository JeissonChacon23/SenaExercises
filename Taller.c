#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main() {
         //Tres personas deciden invertir su dinero para crear una empresa. cada una de ellas invierte una Cantidad distinta. 
         //Obtener el porcentaje que cada quien invierte con respecto a la cantidad total invertida.
            double persona1 = 10000000;
            double persona2 = 8000000;
            double persona3 = 11000000;
            double cantidadTotal = persona1 + persona2 + persona3;
            double porcentaje1 = (100 * persona1) / cantidadTotal;
            double porcentaje2 = (100 * persona2) / cantidadTotal;
            double porcentaje3 = (100 * persona3) / cantidadTotal;
            printf("Persona 1: %f\nPersona 2: %f\nPersona 3: %f", porcentaje1, porcentaje2, porcentaje3);
         }