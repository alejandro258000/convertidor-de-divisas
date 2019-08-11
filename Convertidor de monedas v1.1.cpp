#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
int opcion;
float valor;
int seleccion;

printf("Marque con un numero la conversion que desea hacer:");
printf("\n1. Convertir de Dolar a Bitcoin ");
printf("\n2. Convertir de Bitcoin a Dolar ");
printf("\n3. Convertir de Bolivar a Bitcoin ");
printf("\n4. Convertir de Bitcoin a Bolivar ");
scanf("%d",&opcion);
switch (opcion)
{
case 1:
printf("Ingrese valor (Dolar a Bitcoin) ");
scanf ("%f",&valor);
valor=valor*11450.73;
printf("El resultado es %f\n",valor);
break;

case 2:
printf("Ingrese valor (Bitcoin a Dolar) ");
scanf("%f",&valor);
valor=valor*0.00008733;
printf("El resultado es %f\n",valor);
break;

case 3:
printf("Ingrese valor (Bolivar a Bitcoin) ");
scanf("%f",&valor);
valor=valor*0.0000000012;
printf("El resultado es %f\n",valor);
break;

case 4:
printf("Ingrese valor (Bitcoin a Bolivar) ");
scanf("%f",&valor);
valor=valor*137408760.12;
printf("El resultado es %f\n",valor);
default:
printf ("Error ingrese de nuevo ");
}

system("PAUSE");
return EXIT_SUCCESS;
}
