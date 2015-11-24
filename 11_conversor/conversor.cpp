

#include <stdio.h>
#include <stdlib.h>

#define BASE 8
int main()
{
	int entrada,
	destino = 0,
	sitio = 1;

   printf("Introduce el número entre 0 y 999:");

   scanf ("%i", &entrada );


   destino = (entrada % BASE)* sitio;
   entrada /= BASE;

   sitio *= 10;
   destino = (entrada % BASE) * sitio;
   entrada /= BASE;

   sitio *= 10;
   destino = (entrada % BASE) * sitio;
   entrada /= BASE;

   printf("%i", destino );
    printf("\n ");

    return EXIT_SUCCESS;

	


}
