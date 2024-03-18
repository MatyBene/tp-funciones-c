#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int devuelveEnteroRandom();
void mayorYMenor(int, int, int);
int sumaMenoresN(int);
void tablaMultiplicar(int);
int sumaDosEnteros(int, int);
int restaDosEnteros(int, int);
int multiplicaDosEnteros(int, int);
float divideDosEnteros(int, int);
void cambioSignoANegativo(int *);
void cargarDosNumeros(int *, int *);


int main()
{
  int opcion;

  srand(time(NULL));

  printf("TP 3 - FUNCIONES SIN PILAS\n\n");
  printf("1  -  Ejercicio 1\n");
  printf("2  -  Ejercicio 2\n");
  printf("3  -  Ejercicio 3\n");
  printf("4  -  Ejercicio 4\n");
  printf("5  -  Ejercicio 5\n");
  printf("6  -  Ejercicio 6\n");
  printf("7  -  Ejercicio 7\n\n");
  printf("Ingrese opcion numerica\n");
  fflush(stdin);
  scanf("%d", &opcion);
  system("cls");

  switch(opcion){
    case 1:
      printf("1. Desarrollar una funci�n que devuelva un valor RANDOM en el rango de 0 a 100.\n");

      printf("Numero aleatorio: %i\n", devuelveEnteroRandom());

      break;
    case 2:
      printf("2. Dise�e una funci�n que reciba 3 n�meros enteros y muestre el mayor y el menor.\n");

      int num1, num2, num3;

      printf("Ingrese un numero: ");
      scanf("%i", &num1);
      printf("Ingrese un numero: ");
      scanf("%i", &num2);
      printf("Ingrese un numero: ");
      scanf("%i", &num3);

      mayorYMenor(num1, num2, num3);

      break;
    case 3:
      printf("3. Dise�e una funci�n que reciba un n�mero entero N y realice la suma de los n�meros enteros positivos menores que N y lo retorne. N es un  dato ingresado por el usuario en el main.\n");

      int num4;

      printf("Ingrese un numero: ");
      scanf("%i", &num4);

      printf("La suma de todos los numeros positivos menores que %i, es de: %i.", num4, sumaMenoresN(num4));

      break;
    case 4:
      printf("4. Desarrollar una funci�n que muestre la tabla de multiplicar de un n�mero entero recibido por par�metro.\n");

      int numeroTabla;

      printf("Ingrese un numero para conocer su tabla de multiplicar: \n");
      scanf("%i", &numeroTabla);

      tablaMultiplicar(numeroTabla);

      break;
    case 5:
      printf("5. Realice una peque�a calculadora, utilizando funciones (una funci�n de suma, una de multiplicaci�n, una de resta, una de divisi�n�).\n");

      char operador;
      int num5, num6;

      printf("Ingrese el primer numero: ");
      scanf("%i", &num5);
      printf("Ingrese el operador (+, -, *, /): ");
      fflush(stdin);
      scanf("%c", &operador);
      printf("Ingrese el segundo numero: ");
      scanf("%i", &num6);

      switch(operador){
        case '+':
          printf("El resultado de la suma es: %i", sumaDosEnteros(num5, num6));
          break;
        case '-':
          printf("El resultado de la resta es: %i", restaDosEnteros(num5, num6));
          break;
        case '*':
          printf("El resultado de la multiplicacion es: %i", multiplicaDosEnteros(num5, num6));
          break;
        case '/':
          if(divideDosEnteros(num5, num6) == 0){
            printf("No se puede dividir por cero.");
          } else {
            printf("El resultado de la division es: %.2f", divideDosEnteros(num5, num6));
          }
          break;
        default:
          printf("No se ingreso un operador valido.");
      }
      break;
    case 6:
      printf("6. Realizar una funci�n que reciba un n�mero positivo entero por par�metro por referencia, y cambie su signo a negativo.");

      int num7;

      printf("Ingrese un n�mero positivo: ");
      scanf("%i", &num7);

      cambioSignoANegativo(&num7);

      printf("El n�mero con su signo cambiado es: %i\n", num7);

      break;
    case 7:
      printf("Realizar una funci�n que reciba dos n�meros enteros por par�metro por referencia y cargue sus valores el usuario dentro de la funci�n.");

      int num8, num9;

      cargarDosNumeros(&num8, &num9);

      printf("\nEl primer numero cargado fue: %i", num8);
      printf("\nEl segundo numero cargado fue: %i", num9);

      break;
    default:
      printf("La opcion ingresada no es valida.");
  }

  return 0;
}

int devuelveEnteroRandom(){
  int random = 0;

  random = rand() % 101;

  return random;
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

void tablaMultiplicar(int x){
  for(int i = 0; i <= 10; i++){
    int producto = x * i;
    printf("%i X %i = %i\n", i, x, producto);
  }
}

int sumaDosEnteros(int x, int y){
  return x + y;
}

int restaDosEnteros(int x, int y){
  return x - y;
}

int multiplicaDosEnteros(int x, int y){
  return x * y;
}

float divideDosEnteros(int x, int y){
  float division = 0;

  if(y != 0){
    division = (float) x / y;
  }

  return division;
}

void cambioSignoANegativo(int *x){
  *x *= -1;
}

void cargarDosNumeros(int *x, int *y){
  printf("\nIngrese el primer numero: ");
  scanf("%i", x);
  printf("\nIngrese el segundo numero: ");
  scanf("%i", y);
}
