#include<stdio.h>
#include<stdbool.h>
int main() {
         //Realizar la suma de todos los números pares entre 2 y 1000
         int sum = 0;
         for(int i = 0; i <= 1000; i++){
            if(i % 2 == 0){
                sum += i;
            }
         }
         printf("La suma es: %d",sum);
 }