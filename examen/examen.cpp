/*
 * =====================================================================================
 *
 *       Filename:  examen.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  27/11/15 12:48:24
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
    int menu;
    int a;
    int b;
 unsigned   int suma;
 unsigned   int resta;
 unsigned   int multi;
 unsigned   int division;
	 FILE *pf;
          char  caracter;
   
          pf =fopen("examen.txt","w");


   printf("Introduce el primer y el segundo operando: \n ");
    scanf("%i ",&a );
    scanf("%i",&b );

    printf("Elige una opción: \n");
    printf("1.suma \n");
    printf("2.resta \n");

    printf ("3.multiplicacion \n");
    printf("4.division \n");
    printf ("5.Ver anteriores resultados \n");    
    scanf ("%i",&menu );

    switch(menu)
    {
	case 1:
	    printf("Ha elegido la suma \n ");
	    suma = a + b;
            printf("la solucion es: %i \n",suma );
	    fprintf(pf,"suma:%i",suma);
            break;

	case 2:
	    printf ("Ha elegido la resta \n  ");
	    resta = a - b;
	    printf ("la solución es:%i \n ",resta ); 
	    fprintf (pf,"resta:%i", resta );
            break;


	case 3: 
            printf ("Ha elegido la multiplicación \n ");
            multi = a * b;
            printf ("la solucion es:%i \n ",multi );
	    fprintf (pf,"multiplicacion:%i \n", multi);

            break;	

	case 4:
		printf("Ha elegido la division \n");
	        division = a / b;
	         printf ("la solucion es:%i \n ", division );
	          fprintf (pf,"division:%i",division );
		break;


	case 5:
	
		char caracter;
	fclose(pf);
			

		pf =fopen("examen.txt","r" );

		while ((caracter = fgetc(pf)) != EOF  )
		putchar(caracter);
		fclose(pf);
		break;




	
    }
	
  return EXIT_SUCCESS;	}
