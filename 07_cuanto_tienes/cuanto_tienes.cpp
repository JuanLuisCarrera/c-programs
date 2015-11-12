
#include <stdio.h>
#include <stdlib.h>

int main(){
int saldo;
int dia, mes, anio;

const  char *MES[12] = {
    "Enero",
    "Febrero",
    "Marzo",
    "Abril",
    "Mayo",
    "Junio",
    "Julio",
    "Agosto",
    "Septiembre",
    "Octubre",
    "Noviembre",
    "Diciembre"
};

    printf("¿Cuanto dinero tienes?\n");	
    printf("yo=<cantidad>\n");

    scanf (" yo= %i", &saldo );
	printf("Saldo: %i\n" , saldo );

	printf("Fecha de nacimiento (dd/mm/aa):");
	scanf(" %i/%i/%i" , &dia, &mes, &anio);
	
	printf("Naciste en %i de %s del %i\n ",dia ,MES[mes-1] , anio );

	printf ("Vuelve a introducir la fecha: \n");

	scanf (" %*i/%i/%i", &mes, &anio );

	printf("Naciste en %i de %i. \n" , mes, anio );

	return EXIT_SUCCESS;
}
