// Ester programa lee el archivo koltala.txt usando la funcion fgets()

#include <stdio.h>

int main(){

	int k = 0; 
	char *cptr;
	char store[80];
	FILE *fptr;

	fptr = fopen("kolkata.txt", "r");
	if(fptr != NULL){
		puts("el archivo koltala se ha abierto exitosamente.");
		puts("contenido del archivo:");
		cptr = fgets(store, 80, fptr);

		while(cptr != NULL){
			printf("%s", store);
			cptr = fgets(store, 80, fptr);
		}

		k = fclose(fptr);
		if(k == -1)
			puts("Fallo al cerrar el archivo");
		if( k == 0)
			puts("\nEl archivo se cerro exitosamente.");
	}else{
		puts("Fallo al abrir el archivo.");
	}

	return 0;
}