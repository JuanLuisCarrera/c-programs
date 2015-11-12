#include <stdio.h>
#include <stdlib.h>

int main (){ 
	

    FILE *pf;

    pf = fopen("letracanción.txt","w");

    fprintf(pf, "vamossss \n");

    fclose(pf);

    return EXIT_SUCCESS;

}
