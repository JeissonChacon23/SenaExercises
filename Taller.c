#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main() {
         //Diseñe un diagrama de flujo tal que dado como datos el nombre de un dinosaurios Su Peso y su longitud, expresados estos dos últimos en libras y pies respectivamente’ escriba el nombre del dinosaurio, Su Peso expresado en kilogramos y su longitud expresada en metros (l tonelada equivale a lOOO kilogramos y un 1 pie equivale a O,3047 metros).
            char nombre[30] = "Mastodonte";
            float peso = 3200; //libras
            float longitud = 20; //pies
            float longitudMetros = longitud * 0.3048;
            float pesoKilo = peso * 0.453592;
            float pesoTonelada = peso * 0.000453592;
            printf("Nombre: %s\nLongitud Pies: %f\nLongitud Metros: %f\nPeso Libras: %f\nPeso Kilos: %f\nPeso Toneladas: %f",nombre, longitud, longitudMetros, peso, pesoKilo, pesoTonelada);
         }