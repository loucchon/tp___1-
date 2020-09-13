#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"
#include "funcion.c"

int main()
{

  float numeroA;
  float numeroB;
  float resta;
  float suma;
  float multiplicacion;
  float division;
  int factorialUno;
  int factorialDos;
  int opcion;
  int bandera1=0, bandera2=0;
  char seguir='s';


  do
  {
    printf ("***********CALCULADORA BASICA************\n");
    if (bandera1==0)
    {
        printf("1. Ingrese el primer operando (A=X)\n");
    }
    else
    {
        printf ("1. El primer numero operando es (A=%.2f)\n", numeroA);
    }
    if (bandera2==0)
    {
        printf("2.ingresar segundo operando(B=Y)\n");
    }
    else
    {
       printf("2.El segundo numero operando es (B=%.2f)\n",numeroB);
    }

    opcion=pedirOpcion("3.Calcular todas las operaciones:\n"
                       "A. Calcular suma (A+B)\n"
                       "B. Calcular la resta (A-B)\n"
                       "D. Calcular division (A/B)\n"
                       "E. calcular el factorial(A!)\n"
                       "4. Informar resultados\n"
                       "5. salir\n");
    switch(opcion)
    {
        case 1:
            printf("\n Ingrese el primer numero: \n");
            scanf ("%f",& numeroA);
            bandera1=1;
            break;
        case 2:
            printf("\n Ingrese el segundo numero\n");
            scanf ("%f",& numeroB);
            bandera2=1;
            break;
        case 3:
            printf("Se calcularon las  operaciones,\n oprime 4 para ver los resultados.\n");

            case 'A':
                suma= sumar (numeroA,numeroB);
            case 'B':
                resta=restar (numeroA,numeroB);
            case 'C':
                multiplicacion=multiplicar(numeroA,numeroB);
            case 'D':
                if (numeroB==0)
                {
                    printf("NO SE PUEDE DIVIDIR POR CERO");
                }
                else
                {
                    division= dividir (numeroA,numeroB);
                }
            case 'E':
            factorialUno=factorizar (numeroA);
            factorialDos=factorizar (numeroB);
            break;

        case 4 :
            printf ("\n El resultado de %.2f + %.2f  es:  %.2f",numeroA,numeroB, suma);
            printf ("\n El resultado de %.2f - %.2f es: %.2f",numeroA,numeroB,resta);
            printf ("\n El resultado de %.2f * %.2f es: %.2f",numeroA,numeroB,multiplicacion);
            printf ("\n El resultado de %.2f / %.2f es: %.2f,",numeroA,numeroB,division);
            if (factorialUno >= 1)
                {
                printf("\n el factorial de %.2f es %i \n",numeroA, factorialUno);
                }
                else
                {
                printf("\n MathError! no se puede factorizar decimales o numeros negativos.\n");
                }
                if (factorialDos >= 1)
                {
                    printf (" el factorial de %.2f es %i \n",numeroB, factorialDos);
                }
                else
                {
                printf(" MathError! no es posible factorizar decimales o numeros negativos.\n");
                }
                break;

            case 5:
                seguir='n';
                break;

            default:
                printf("opcion incorrecta\n");
                break;
     }
                system("pause");
                system("cls");

  }while(seguir=='s');


    return 0;
}
