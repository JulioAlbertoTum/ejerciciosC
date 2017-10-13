// leer enteros escritos en una archivo binario num.dat usando fread()

#include <stdio.h>

int main(){
	int i, k;
	int a[10];
	FILE  *fptr;

	fptr = fopen("num.dat", "rb");
	if(fptr != NULL){
		puts("num.dat se ha abierto exitosamente");
		fread(a, sizeof(int), 10, fptr);
		puts("contenido de file num.dat:");
		for(i = 0; i <10; i++)
			printf("%d\n", a[i]);

		k = fclose(fptr);
		if(k == -1)
			puts("Cierre del archivo ha fallado");
		if(k == 0)
			puts("Se ha cerrado exitosamente");
	}else{
		puts("Apertura del fichero fallida");
	}

	return 0;
}