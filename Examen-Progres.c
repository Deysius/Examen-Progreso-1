#include <stdio.h>
int main(){
int num;
int hexadecimal=0;
int contador=0;
printf ("Ingrese un numero para encontrar el numero hexadecimal\n");
scanf ("%d",&num);
//Inicializo mis variables, y solicito al usuario que ingrese el valor de una de las variables
while (hexadecimal<num)
{
contador=contador+1;
hexadecimal=16*contador;
}
return 0;
}