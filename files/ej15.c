// este programa cambia el nombre del archivo kolkata.txt a city.dat

#include <stdio.h>

int main(){

	int m;
	m = rename("kolkata.txt","city.dat");
	if( m == 0)
		puts("Operaciones par renombrar una archivo se ha hecho exitosamemte");
	if( m != 0)
		puts("La operacion de renombre a fallado");
	return 0;
}