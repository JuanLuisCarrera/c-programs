/*
 * =====================================================================================
 *
 *       Filename:  cambioaut.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20/11/15 14:03:39
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
int destino = 0;

printf("Número:");
scanf("%i" ,&origen);

do
{
 destino *= 10;
 destino += origen % 10;
 origen /= 10;


} while(origen != 0);

printf ("%i \n", destino );


return EXIT_SUCCESS;
}
