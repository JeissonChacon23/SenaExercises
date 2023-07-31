#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main() {
            //18.) En un hospital existen tres áreas: Ginecología, Pediatra, Traumatóloga.
            //El presupuesto anual (o monto) del hospital se reparte conforme a la siguiente tabla:
                double presupuestoAnual = 1000000000;
                double ginecologia = presupuestoAnual * 0.40;
                double pediatria = presupuestoAnual * 0.30;
                double traumatologia = presupuestoAnual * 0.30;
                printf("Presupuesto Anual: %.2f\nGinecologia: %.2f\nPediatria: %.2f\nTraumatologia: %.2f", 
                presupuestoAnual, ginecologia, pediatria, traumatologia);
         }