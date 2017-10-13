// este programa lee el contenido de un archivo txt y mostramos
// el contenido, las operaciones de apertura y cierre son verificadas

#include <stdio.h>

int main(){

	int num, k = 0;
	FILE  *fptr;
	fptr = fopen("satara.txt", "r");
	if(fptr != NULL){
		puts("El archivo satara.txt se ha abierto exitosamente");
		puts("Contenido del archivo satara.txt");
		num = fgetc(fptr);

		while(!feof(fptr)){
			putchar(num);
			num = fgetc(fptr);
		}

		k = fclose(fptr);
		if( k == -1){
			puts("Cierre del archivo ha fallado.");
		}else{
			puts("Cierre del archivo exitoso.");
		}
	}else{
		puts("Apertura del archivo fallido");
	}

	return 0;
}