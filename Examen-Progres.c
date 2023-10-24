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
}
if (hexa*contador==num)
{
    contador=contador;
}
else
contador=contador-1;
printf("%dD",contador);
return 0;
}