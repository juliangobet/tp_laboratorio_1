#include <stdio.h>
#include <stdlib.h>
#include "calcu.h"

int main()
{
    int opcion;
    int numeroA=0;
    int numeroB=0;
    int suma;
    int resta;
    int multiplica;
    float div;
    long fact;
    long fact2;
    int respuesta=1;
    int validador=3;

    printf("Bienvenido a mi primera calculadora :D .\n");
    while(respuesta==1)
    {

        printf("\n =========================================== \n");
        printf("Presione 1 para ingresar el primer numero. \n");
        printf("Presione 2 para ingresar el segundo numero. \n");
        printf("Presione 3 para realizar todas las operaciones matematicas. \n");
        printf("Presione 4 para ver los resultados. \n");
        printf("Presione 5 para salir. \n");
        scanf("%i",&opcion);

        //Se utiliza un switch para realizar cada accion dependiendo el numero que ingrese el cliente.
        switch(opcion)
        {
            //El case1 sirve para pedir y almacenar el primer numero.
        case 1:
            {
            printf("Ingrese el primer numero: ");
            fflush(stdin);
            scanf("%i", &numeroA);

            break;
            }
            //El case2 sirve para pedir y almacenar el segundo numero.
        case 2:
            {
            printf("Ingrese el segundo numero: ");
            fflush(stdin);
            scanf("%i", &numeroB);

            break;
            }
            //El case3 sirve para llamar a todas las funciones y realizar todas las ecuaciones.
        case 3:
            {
                printf("\n El valor de A es: %d \n",numeroA);
                printf("\n El valor de B es: %d \n",numeroB);
                suma=sumar(numeroA,numeroB);
                resta=restar(numeroA,numeroB);
                multiplica=multiplicar(numeroA,numeroB);
                if(numeroB==0)
                {
                    printf("No se ejecuto la division");

                }
                else
                {
                    div=dividir(numeroA,numeroB);
                }

                fact=factorial(numeroA);
                fact2=factorial(numeroB);
                break;
            }
            //El case4 sirve para mostrar los resultados por pantalla.
        case 4:
            {
                printf("El resultado de la suma es: \n");
                printf("%d",suma);
                printf("\n El resultado de la resta es: \n");
                printf("%d",resta);
                printf("\n El resultado de la multiplicacion es: \n");
                printf("%d",multiplica);
                printf("\n El resultado de la division es: \n");
                printf("%.2f",div);
                printf("\n El factorial de A es: \n");
                printf("%d",fact);
                printf("\n El factorial de B es: \n");
                printf("%d",fact2);
                break;
            }
            //El case 5 sirve para cerrar la aplicacion en el momento que queramos.
        case 5:
            {

                printf("\n Confirmar salida presionando 0...De lo contrario oprima cualquier tecla, menos la de apagar XD. \n");
                scanf("%i",&validador);
                if(validador==0)
                {
                    respuesta=0;
                }
                break;

            }
        default:
            {
                printf("La opcion ingresada no es valida.");
                break;
            }

        }


    }



    return 0;
}
