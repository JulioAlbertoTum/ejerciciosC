// el programa acepta  y almacena 5 strings en una sesion interactiva
// usando la funcion malloc()

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char *friends[5], *ptr, name[30];
	int i, length;

	for(i=0; i <5; i++){
		printf("Ingrese el nombre del amigo nro. %d: ", i+1);
		scanf(" %[^\n]", name);
		length = strlen(name);
		ptr = (char *) malloc (length + 1);
		strcpy(ptr, name);
		friends[i] = ptr;
	}

	printf("\n\nLista de amigos:\n");
	for(i=0; i < 5; i++)
		printf("Amigo Nro. %d : %s\n", i+1, friends[i]);
	return 0;
}

