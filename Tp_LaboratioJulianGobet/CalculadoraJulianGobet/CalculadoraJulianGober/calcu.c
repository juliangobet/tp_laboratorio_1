#include <stdio.h>
#include <stdlib.h>
#include "calcu.h"
int sumar(int a,int b)
{
    return (a+b);
}

int restar (int a,int b)
{
    return (a-b);
}

int multiplicar(int a,int b)
{
    return(a*b);
}

float dividir(float dividendo,float divisor)
{
    return (dividendo/divisor);
}

int factorial(int x)
{
    int acumulador=1;
    for (int i=1;i<=x;i++)
    {
        acumulador=(acumulador*x);
    }
    return acumulador;
}
