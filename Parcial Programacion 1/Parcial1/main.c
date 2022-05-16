#include <stdio.h>
#include <stdlib.h>

/*
1. Crear una funci�n llamada aplicarDescuento que reciba como par�metro
el precio de un producto y devuelva el valor del producto con un descuento
del 5%. Realizar la llamada desde el main.*/


/*
2. Crear una funci�n que se llame contarCaracteres que reciba una cadena de caracteres
como primer par�metro y un car�cter como segundo y devuelva la cantidad de veces que ese
car�cter aparece en la cadena
*/


int aplicarDescuento(float* precioProducto);

int contarCaracteres(char nombre[], char caracter);

int main()
{
    char nombre[20] = "Rossmary";
    char caracter = 's';
    int cantidadLetra;

    cantidadLetra = contarCaracteres(nombre, caracter);
    printf("%c aparece %d veces en %s.\n", caracter, cantidadLetra, nombre);

    float precioProducto = 15.000;

    aplicarDescuento(&precioProducto);

   printf("El Precio del producto con el descuento: %.3f\n", precioProducto);


    return 0;
}


//1
int aplicarDescuento(float* precioProducto)
{
    int todoOk =0;
    float precioConDescuento;

    if(precioProducto!=NULL && precioProducto>0)
    {
        precioConDescuento=*precioProducto-(*precioProducto*0.05);
        *precioProducto=precioConDescuento;
        todoOk=1;
    }


    return todoOk;
}

//2

int contarCaracteres(char palabra[], char caracter)
{
    int contador=0;

    if(palabra != NULL)
    {
        for(int i=0; i<strlen(palabra); i++)
        {
            if(palabra[i]==caracter)
            {
                contador++;
            }
        }
    }
    return contador;
}



