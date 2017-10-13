// guardar cadenas e nuna session interactiva

#include <stdio.h>

int main(){
	int i;
	char name[8];
	char *pname;

	printf("\n Ingrese nombre: ");
	scanf(" %[^\n]",name);
	printf("Ingrese el nombre de nuevo: ");
	scanf(" %[^\n]", pname);

	printf("name: %s\n", name);
	printf("pname: %s\n", pname);

	return 0;
}

