#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main() {
        //17.) Un vendedor recibe un sueldo base, más un bono extra por Comisión de sus ventas, el vendedor desea saber 
        //cuánto dinero obtendrá por concepto de comisiones por las tres ventas que realiza en el mes y el total 
        //que recibirá en el mes tomando en cuenta su sueldo base y comisiones.
            int sueldoBase = 1300000;
            int comision1 = 15000;
            int comision2 = 45000;
            int comision3 = 25000;
            int bonoExtraComision = comision1 + comision2 + comision3;
            printf("Sueldo Base: %d\nComision: %d\nSueldo Total: %d", sueldoBase, bonoExtraComision,(bonoExtraComision + sueldoBase));
            return 0;
         }