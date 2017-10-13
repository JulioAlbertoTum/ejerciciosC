#include <stdio.h>

int main(){
	int marks [] = {72, 56, 50, 80, 92};
	int i, *ptr; // definiendo un puntero
	ptr = &marks[0];
	for(i=0; i < 5; i++){
		printf("Elemento nro. %d, valor: %d\n",i+1, *(ptr+i));
				
	}
	printf("Valor del nombre array es: %u\n", marks);
	return 0;
}

