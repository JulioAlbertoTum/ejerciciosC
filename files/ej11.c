// Este programa escribe un array de valores enteros a un archivo binario usando 
// la funcion fwrite()

#include <stdio.h>

int main(){

	int i, k, m, a[20];
	FILE *fptr;

	for(i = 0; i < 20; i++)
		a[i] = 30000 + i;

	fptr = fopen("num.dat", "wb");
	if(fptr != NULL){
		puts("el archivo num.dat se ha abierto exitosamente");
		m = fwrite(a, sizeof(int), 10, fptr);
		if(m == 10)
			puts("Los datos se han escrito exitosamente");
		k = fclose(fptr);
		if(k == -1)
			puts("cierre de archivo fallido");
		if(k == 0)
			puts("el cierre a sido exitoso");
	}else{
		puts("apertura de archivo fallida");
	}
	return 0;
}