// Este programa crea una archivo de  texto en una sesion 
// interactiva usando la funcion fputs()
 
#include <stdio.h>
#include <string.h>

int main(){
	int k = 0, n = 0;
	char filename[40], temp[15], store[80];

	FILE  *fptr;

	printf("Ingrese el nombre del archivo AAAA.AA con extension opcional: ");
	scanf("%s", temp);
	strcpy(filename, "");
	strcat(filename, temp);
	fptr = fopen(filename, "w");\
	if(fptr != NULL){
		printf("File %s se ha abiert exitosamente.\n", filename);
		puts("Ingrese las lineas de texto que almacenara el archivo.");
		puts("Presione enter 2 veces para terminar la session.");
		fflush(stdin);
		gets(store);
		n = strlen(store);

		while(n != 0){
			fputs(store, fptr);
			fputs("\n", fptr);
			gets(store);
			n = strlen(store);
		}

		k = fclose(fptr);
		if( k == -1){
			puts("El cierre del archivo ha fallado");
		}
		if(k == 0){
			puts("El archivo se ha cerrado exitosamente");
		}
	}else{
		puts("apertura del archivo fallida");
		return 0;
	}
	return 0;
}