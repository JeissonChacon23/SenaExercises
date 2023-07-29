#include<stdio.h>
#include<stdbool.h>
int main() {
         //Dada la matricula y cinco calificaciones de un alumno obtenidas a lo largo del semestre, construye un diagrama de flujo que imprima la matricula del estudiante y el promedio de sus calificaciones
            int matricula = 12345;
            float calf1 = 3.5;
            float calf2 = 4.1;
            float calf3 = 2.9;
            float calf4 = 4.3;
            float calf5 = 3.7;
            float promedio = (calf1 + calf2 + calf3 + calf4 + calf5) / 5;
            printf(" Matricula: %d\n Promedio: %f",matricula, promedio);
         }