// Este programa intercambia strings usando un array de punteros a strings

#include <stdio.h>

int main(){
	int i;
	char *temporary;
	char *friends[5] = { "Kernighan", "Camarda", "Ford", "Nixon", "Wu"};
	printf("Strings antes del intercambio: \n");
	for(i=0; i<5; i++)
		printf("Friend no. %d ; %s\n", i+1, friends[i]);

	temporary = friends[1];
	friends[1] = friends[0];
	friends[0] = temporary;

	printf("\nStrings despues del intercambio:\n");
	for(i=0; i<5; i++)
		printf("Amigo Nro. %d: %s\n", i+1, friends[i]);

	return 0;

	return 0;	
}