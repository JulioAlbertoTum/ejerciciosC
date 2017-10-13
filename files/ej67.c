// escribir enteros en un archivo
// este programa escribe datos en una archivo usando la funcion
// fprintf()

#include <stdio.h>

int main(){
	int i, k = 0;
	FILE  *fptr;
	fptr = fopen("numbers.dat","w");
	if(fptr != NULL){
		puts("El archivo numbers.dat se ha abierto exitosamente");
		for(i=0; i<10; i++)
			fprintf(fptr, "%d", i+1);

		puts("Los datos han sido escritos en el archivo exitosamente.");
	}else{
		puts("Fallo al abrir el archivo");
	}
	return 0;
}