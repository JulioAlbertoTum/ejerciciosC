// lee el archivo en disco satara.txt y escribe este contenido 
// en la device-file "monitor."

#include <stdio.h>

int main(){

	int m, k;
	FILE *fptr;
	fptr = fopen("satara.txt", "r");
	if(fptr != NULL){
		puts("archivo en disco kolkata.txt abierto exitosamente");
		puts("su contenido se escribe en el dispositivo file monitor");
		m = fgetc(fptr);

		while(m != EOF){
			fputc(m, stdout);
			m = fgetc(fptr);
		}

		k = fclose(fptr);
		if(k == -1)
			fprintf(stderr, "cerrado del archivo en disco ha fallado\n");
		if(k == 0)
			puts("Disk file se ha cerrado exitosmente");
	}else{
		fprintf(stderr, "Apertura del archivo ha fallado");
	}
	return 0;
}