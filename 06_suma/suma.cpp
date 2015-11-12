
#include <stdio.h>
#include <stdlib.h>

int main(){
	int op1 ,
	    op2;
		

    printf ("Operando 1: ");
    scanf (" %i", &op1 );// el %i indica que tipo de dato se espera en este caso un entero, &op1 se pone siempre que no se alla iniciado el tamaño del dato y para que se guarde aqui lo que se lea del teclado.
    printf ("Operando 2: ");
    scanf (" %i", &op2 );
 	printf("El resultado es: %i + %i = %i\n ", op1, op2, op1 + op2);


	return EXIT_SUCCESS;
}
