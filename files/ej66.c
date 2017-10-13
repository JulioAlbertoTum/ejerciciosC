// este programa crea un archivo de texto en una sesion interactiva usando
// la funcion fputc()

#include <stdio.h>

int main(){
	int k = 0, n = 0;
	FILE  *fptr;
	fptr = fopen("jaipur.txt","w");
	if(fptr != NULL){
		puts("El archivo jaipur.txt ha sido abierto exitosamente.");
		puts("Ingresa el texto a ser escrito. Ingresa * para");
		puts("Terminar la sesion de entrada");

		n = getchar();
		while(n != '*'){
			fputc(n, fptr);
			n = getchar();
		}
		k = fclose(fptr);
		if(k == -1)
			puts("Error al cerrar el archivo");
		if( k == 0)
			puts("El archivo se cerro exitosamente");
	}else{
		puts("fallo al abrir el archivo");
	}
	return 0;
}