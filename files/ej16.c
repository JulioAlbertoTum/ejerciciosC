// Este programa borra el archivo city.dat


#include <stdio.h>

int main(){

	int m;
	m = remove("city.dat");

	if(m == 0)
		puts("Operacion de borrado exitoso.");
	if(m != 0)
		puts("Operacion de borrado ha fallado.");

	return 0;
}