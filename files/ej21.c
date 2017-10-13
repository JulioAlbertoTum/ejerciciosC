// este programa lee el teclado y muestra
// el contenido de  este archivo en la pantalla.

#include <stdio.h>

int main(){
	char text[500];
	int m, n = 0, p;
	puts("Typea el texto, el texto tipeado sera el contenido");
	puts("del teclado. presiona la tecla de funcion f6");
	puts("para terminar el archivo");

	m = fgetc(stdin);

	while( m != EOF){
		text[n] = m;
		n = n+1;
		m = fgetc(stdin);
	}

	puts("contenido del teclado: ");
	for(p = 0; p < n; p++)
		putchar(text[p]);

	return 0;
}