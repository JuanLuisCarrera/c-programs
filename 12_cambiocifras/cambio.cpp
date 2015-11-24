/*
 * =====================================================================================
 *
 *       Filename:  cambio.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20/11/15 13:39:54
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */





#include <stdio.h>
#include <stdlib.h>

	int main()
{
    int origen;
    int destino;

    printf("Introduce un número entre 0 y 999 :");

    scanf ("%i", &origen);

    destino = origen % 10;

    origen = origen / 10;

    destino = destino * 10;

    destino = destino + (origen %10);

    origen = origen /10;

    destino = destino * 10;
    destino = destino + origen;

    printf("El numero es:%i", destino);


    return EXIT_SUCCESS;

    }
