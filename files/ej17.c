// este programa crea una copia del archivo satara.txt
// con el nombre town.dat

#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fptrSource, *fptrTarget;
	int m, n, p;

	fptrSource = fopen("satara.txt", "r");
	if(fptrSource == NULL){
		puts("Apertura del archivo fuente ha fallado");
		exit(1);
	}

	puts("Archivo satara.txt abierto exitosamente");

	fptrTarget = fopen("town.dat", "w");
	if(fptrTarget == NULL){
		puts("apertura del archivo destino ha fallado");
		exit(2);
	}
	puts("Archivo destino abierto exitosamente");

	m = fgetc(fptrSource);
	while(m != EOF){
		fputc(m, fptrTarget);
		m = fgetc(fptrSource);
	}

	puts("Archivo copiado exitosamente");
	n = fclose(fptrSource);
	if( n == -1)
		puts("archivo fuente ha fallado al cerrarse");
	if( n == 0)
		puts("archivo fuente se ha cerrado exitosamente");
	
	p = fclose(fptrTarget);
	if( p == -1)
		puts("archivo destino ha fallado al cerrarse");
	if( p == 0)
		puts("archivo destino se ha cerrado exitosamente");
	return 0;
}