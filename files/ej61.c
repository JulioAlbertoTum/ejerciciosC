// Este programa lee el contenido de una archivo txt 
// y muestra su contenido
#include <stdio.h>

int main(){
	int num;
	FILE *fptr;
	fptr = fopen("test.txt", "r");
	num = fgetc(fptr);


	while (num != EOF){
		putchar(num);
		num = fgetc(fptr);
	}

	fclose(fptr);
	return 0;
}