// devolver las direcciones base de filas en un array bidimensional

#include <stdio.h>

int main(){
	int r;
	int num[3][2] = {
		{14, 457},{24,382},{72,624}
	};

	for(r = 0; r < 3; r++){
		printf("Direccion base de la fila %d es: %u \n", r+1, num[r]);
	}

	return 0;
}