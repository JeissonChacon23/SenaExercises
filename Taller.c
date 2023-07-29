#include<stdio.h>
#include<stdbool.h>
int main() {
         //Un cliente ejecuta un pedido a  un almacén, el almacén examina en su base de datos la ficha del cliente, 
         //si el cliente está al día  entonces el almacén acepta el pedido, en caso contrario rechaza el pedido.

         int pedido = 5;
         bool estadoCliente = false; //Si es true es que el cliente esta al día 
         if(estadoCliente == true){
            printf("Pedido %d aceptado",pedido);
         }else{
            printf("Pedido %d denegado",pedido);
         }
         
         /*
         //Chacon 
         int pedido = 5;
         int estadoCliente = 1; //0.) Cliente sin deuda  1.) Cliente con deuda
         if(estadoCliente == 1){
            printf("Pedido %d aceptado",pedido);
         }else{
            printf("Pedido %d denegado",pedido);
         }
         */
         /*
         //Natalia
         int pedido = 1;
         int estadoCliente = 5;
         if(estadoCliente <= 5){
            printf("Pedido aceptado");
         }
         else{
            printf("Pedido no aceptado");
         }
         */
 }