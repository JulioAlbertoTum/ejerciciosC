// este programa hace operaciones de escritura y lectura sobre un archivo.

#include <stdio.h>

int main(){
	FILE *fptr;
	char store[80];
	int k;
	fptr = fopen("pune.txt", "w+");

	if(fptr != NULL){
		puts("el archivo pune.txt se ha abierto exitosamente");
		fputs("Pune es una bonita ciudad.", fptr);
		puts("Se ha escrito el archivo pune.txt exitosamente");
		rewind(fptr);
		fgets(store, 80, fptr);
		puts("contenido del archivo pune.txt: ");
		puts(store);
		k = fclose(fptr);
		if(k == -1)
			puts("cierre del archivo ha fallado");
		if(k == 0)
			puts("cierre del archivo exitoso");
	}else{
		puts("apertura del archivo ha fallado");
	}
	return 0;
}