// este programa usa argmuentos en la linea de comandos

#include <stdio.h>

int main(int argc, char *argv[]){

	int i;
	printf("Pocos pueblso en %s distrito: \n", argv[1]);
	for (i = 2; i < argc; i++)
		printf("%s\n", argv[i]);
	return 0;
}