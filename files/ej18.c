// este programa crea uan copia del archivo binario hello.exe nombrado como world.exe

#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE  *fptrSource, *fptrTarget;
	int m, n, p;

	fptrSource = fopen("hello.exe", "rb");
	if(fptrSource == NULL){
		puts("apertura de archivo fuente ha fallado");
		exit(1);
	}
	puts("Archivo hello.exe se ha abierto exitosamente");

	fptrTarget = fopen("world.exe", "wb");
	if(fptrTarget == NULL){
		puts("apertura de archivo destino ha fallado");
		exit(1);
	}
	puts("Archivo world.exe se ha abierto exitosamente");

	m = fgetc(fptrSource);

	while( m != EOF){
		fputc(m, fptrTarget);
		m = fgetc(fptrSource);
	}

	puts("Archivo copiado exitosamente");

	n = fclose(fptrSource);
	if(n == -1)
		puts("cerrado del archivo fuente ha fallado");
	if(n == 0)
		puts("cerrado del archivo fuente exitoso");

	p = fclose(fptrTarget);
	if(p == -1)
		puts("cerrado del archivo destino ha fallado");
	if(p == 0)
		puts("cerrado del archivo destino exitoso");

	return 0;
}