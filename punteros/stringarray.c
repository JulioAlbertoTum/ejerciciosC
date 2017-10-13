// este programa intercambia los strings en una array bidimensional de caracteres.

#include <stdio.h>

int main(){
	int i; 
	char temp;
	char friends[5][10] = {"Kernighan","Camarda","Ford","Nixon","Wu"};

	printf("Strings antes del intercambio:\n");
	for(i=0; i<5; i++)
		printf("Amigo Nro. %d: %s\n",i+1, friends[i]);

	for(i=0; i<10; i++){
		temp = friends[0][i];
		friends[0][i] = friends[1][i];
		friends[1][i] = temp;
	}
	printf("\n Strings despues del intercambio: \n");
	for(i=0; i<5; i++){
		printf("Amigo nro. %d : %s\n", i+1, friends[i]);
	}

	return 0;
}