#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numeroRandom();
void mayorYMenor(int, int, int);
int sumaMenoresN(int);
void tablaMultiplicar(int);


int main()
{
  int opcion;
  int random = numeroRandom();
  int a, b, c;
  int numero, suma;

  printf("Trabajo practico 1: Funciones\n");
  printf("1. Desarrollar una función que devuelva un valor RANDOM en el rango de 0 a 100.\n");
  printf("2. Diseñe una función que reciba 3 números enteros y muestre el mayor y el menor.\n");
  printf("3. Diseñe una función que reciba un número entero N y realice la suma de los números enteros positivos menores que N y lo retorne. N es un  dato ingresado por el usuario en el main.\n");
  printf("4. Desarrollar una función que muestre la tabla de multiplicar de un número entero recibido por parámetro.\n");
  printf("5. Realice una pequeña calculadora, utilizando funciones (una función de suma, una de multiplicación, una de resta, una de división…).\n");
  printf("6. Realizar una función que reciba un número positivo entero por parámetro por referencia, y cambie su signo a negativo.\n");
  printf("7. Realizar una función que reciba dos números enteros por parámetro por referencia y cargue sus valores el usuario dentro de la función.\n");
  printf("Elija el punto del tp que quiera verificar:\n");
  scanf("%i", &opcion);

  switch(opcion){
  case 1:
    system("cls");
    printf("1. Desarrollar una función que devuelva un valor RANDOM en el rango de 0 a 100.\n");

    printf("Numero aleatorio: %i\n", random);

    break;
  case 2:
    system("cls");
    printf("2. Diseñe una función que reciba 3 números enteros y muestre el mayor y el menor.\n");

    printf("Ingrese un numero: ");
    scanf("%i", &a);
    printf("Ingrese un numero: ");
    scanf("%i", &b);
    printf("Ingrese un numero: ");
    scanf("%i", &c);

    mayorYMenor(a, b, c);

    break;
  case 3:
    system("cls");
    printf("3. Diseñe una función que reciba un número entero N y realice la suma de los números enteros positivos menores que N y lo retorne. N es un  dato ingresado por el usuario en el main.\n");

    printf("Ingrese un numero: ");
    scanf("%i", &numero);

    suma = sumaMenoresN(numero);

    printf("La suma de todos los numeros positivos menores que %i, es de: %i.", numero, suma);

    break;
  case 4:
    system("cls");
    printf("4. Desarrollar una función que muestre la tabla de multiplicar de un número entero recibido por parámetro.\n");


  default:
    printf("La opcion ingresada no es valida.");
  }

  return 0;
}

int numeroRandom(){
  srand(time(NULL));
  return rand() % 101;
}

void mayorYMenor(int x, int y, int z){
  int mayor, menor;

  mayor = menor = x;

  if(y > mayor){
    mayor = y;
  } else if(y < menor){
    menor = y;
  }

  if(z > mayor){
    mayor = z;
  } else if(z < menor){
    menor = z;
  }

  printf("El mayor de los numeros es: %i.\n", mayor);
  printf("El menor de los numeros es: %i.", menor);
}

int sumaMenoresN(int x){
  int suma = 0;

  for(int i = x - 1; i > 0; i--){
    suma += i;
  }

  return suma;
}


