#include <stdio.h>
int main(){
int num;
int hexadecimal=0;
int contador=0;
int hexa=16;
printf ("Ingrese un numero para encontrar el numero hexadecimal\n");
scanf ("%d",&num);
//Inicializo mis variables, y solicito al usuario que ingrese el valor de una de las variables
while (hexadecimal<num)
{
contador=contador+1;
hexadecimal=16*contador;
//Inicializo un contador, en el cual se va sumando de uno en uno, y multiplicando por 16 hasta que el numero resultante sea mayor al numero ingresado
}
if (hexa*contador==num)
{
    contador=contador;
}
else
contador=contador-1;
//Mediante un ifelse comparo que le numero dado sea igual al numero ingresado, si es el caso el contador permanece igual, en caso de que no sea igual se resta uno al contador

printf("%dD",contador);
return 0;
}