// este programa lee un archivo  usando la funcion fscanf()

#include <stdio.h>


int main()
{	
	int m = 0, n, k = 0;
	FILE  *fptr;
	fptr = fopen("numbers.dat", "r");
	if(fptr != NULL){
		puts("El archivo numbers.dat ha sido abierto exitosamente");
		puts("Contenido del archivo numbers.dat: ");
		m = fscanf(fptr, "%d", &n);

		while(m != EOF){
			printf("%d ", n);
			m = fscanf(fptr, "%d", &n);
		}

		printf("\n");
		k = fclose(fptr);
		if(k == -1)
			puts("Cierre de archivo ha fallado");
		if(k == 0)
			puts("File cerrado exitosamente");
	}else{
		puts("La apertura del archivo ha fallado");
	}
	return 0;
}