#include<stdio.h>
#include<stdbool.h>
int main() {
         //Construya un diagrama de flujo, dados los datos A,B,C y D que representan números enteros, escriban los mismo en orden inverso
         int a = 1;
         int b = 2;
         int c = 3;
         int d = 4;
         printf("%d %d %d %d\n", a, b, c, d);
         printf("%d %d %d %d\n", d, c, b, a);

         int num = 1234;
         int cif1 = num / 1000;
         int mod1 = num % 1000;
         int cif2 = mod1 / 100;
         int mod2 = mod1 % 100;
         int cif3 = mod2 /10;
         int cif4 = mod2 % 10;

         printf("%d", cif1);
         printf("%d", cif2);
         printf("%d", cif3);
         printf("%d\n", cif4);

         int inverso = (cif4 * 1000) + (cif3 * 100) + (cif2 * 10) + cif1;
         printf("%d", inverso);
 }