/*
 * =====================================================================================
 *
 *       Filename:  sumatorio.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  13/11/15 13:07:11
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
 int resultado = 0;  
 int entrada;
 
 FILE *pf;
 
	

 pf = fopen("numeros.txt","r" );

 fscanf(pf, "%i", &entrada);
 resultado += entrada;

 fclose(pf);

		
	

	fprintf("La suma es: %i/n ",resultado );

	

	return EXIT_SUCCESS;


}
