// Este programa crea una archivo llamado kolkata.txt 
// usando la funcion fputs()

#include <stdio.h>

int main(){

	int k = 0;
	FILE *fptr;
	fptr = fopen("kolkata.txt", "w");
	if(fptr != NULL){
		puts("Archivo kolkata.txt se ha abierto exitosamente");
		fputs("kolkata es una ciudad grande.\n", fptr);
		fputs("Es tambien una ciudad muy bonita.\n",fptr);
		k = fclose(fptr);
		if(k == -1)
			puts("el cierre ha fallado");
		if(k == 0)
			puts("el archivo se ha cerrado exitosamente");
	}else{
		puts("Apertira del archivo fallida");
		return 0;
	}
	return 0;
}