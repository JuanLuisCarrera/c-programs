#include <stdio.h>
#include <stdlib.h>

int main(){
	int op1, op2;

	printf("Operando 1: "); //escribe el operando 1
	scanf(" %i", &op1); //lee el operando 1 (& sirve para no tener que ponerle corchetes a el "int op1"

	printf("Operando 2: "); //escribe el operando 2
	scanf(" %i", &op2); //lee el operando 2




	printf("El resultado es: %i + %i = %i\n", op1, op2, op1 + op2); //op1 muestra el operando 1, el op2 muestra el operando 2 y el op1 + op2 lo que hace es sumarlos :D




    return EXIT_SUCCESS;
    }
