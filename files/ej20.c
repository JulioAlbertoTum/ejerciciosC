// Este  programa posiciona el archivo en un caracter deseado.
// usando la funocion fseek() yy ftell()

#include <stdio.h>
int main(){

	FILE *fptr;
	int m, n, k, p;
	fptr = fopen("pune.txt", "r");

	if(fptr != NULL){
		puts("File pune.txt abierto exitosamente");
		puts("N denota la actual posicion de la fila");
		n = ftell(fptr);
		printf("Ahora el valor de n es %d\n", n);
		printf("Nos permite leer un solo caracter en este: ");
		m = fgetc(fptr);
		putchar(m);
		printf("\n");
		n = ftell(fptr);
		printf("Ahora el valor de n es %d\n", n);
		fseek(fptr, 8, 0);
		puts("Sentencias \"fseek(fptr, 8, 0);\" ejecutado");
		n = ftell(fptr);
		printf("ahora el valor de n es %d\n", n);
		fseek(fptr, 3, 1);
		puts("Sentencia \" fseek(fptr, 3, 1);\" ejecutado");
		n = ftell(fptr);
		printf("Ahora el valor de n es %d\n", n);
		fseek(fptr, -5, 1);
		puts("Sentencia \" fseek(fptr, -5, 1); \" ejecutado");
		n = ftell(fptr);
		printf("Ahora el valor de n es %d\n", n);
		fseek(fptr, -3, 2);
		puts("Sentencia \" fseek(fptr, -3, 2); \" ejecutado");
		n = ftell(fptr);
		printf("Ahora el valor de n es %d\n", n);
		fseek(fptr, 0, 2);
		puts("Sentencia \" fseek(fptr, 0, 2); \" ejecutado");
		n = ftell(fptr);
		printf("Ahora el valor de n es %d\n", n);

		puts("Ahora permitenos realizar una operacion de lectura");
		m = fgetc(fptr);
		printf("valor de lectura es %d\n", m);
		n = ftell(fptr);
		printf("el valor de n es todaviona %d\n", n);
		fseek(fptr, 0, 0);
		puts("Sentencia \"fseek(fptr, 0,0);\" ejecutado");
		n = ftell(fptr);
		printf("Ahora el valor de n es %d\n", n);
		puts("eso es todo");
		k = fclose(fptr);

		if(k == -1)
			puts("el cierre del fichero ha sido fallido");
		if(k == 0)
			puts("el cierre ha sido exitoso");

	}else{
		puts("la apertura ha fallado");
	}
	return 0;
}