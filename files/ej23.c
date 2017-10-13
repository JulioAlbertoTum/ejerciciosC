// este programa lee el teclado y escribe el contenido en
// en device file monitor

#include <stdio.h>

int main(){
	char text[500];
	int m, n =0, p;
	puts("tipeamos el text. el texto sera el contenido");
	puts("de el disposivo teclado, presionna f6");
	puts("para terminar el archivo");

	m = fgetc(stdin);
	while(m != EOF){
		text[n]	 = m;
		n = n + 1;
		m = fgetc(stdin);
	}

	puts("contenido del dispositivo teclado esta ahora");
	puts("escribe el dispositivo monitor");

	for(p = 0; p < n; p++)
		fputc(text[p], stdout);
	
	return 0;
}