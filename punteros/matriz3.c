// Este programa adicina dos tablas de numeros y enteros al resultado en an 
// tercera tabla en ellos, muestra esta en la pantalla usando punteros y usando 3
// enfoques diferentes.

#include <stdio.h>

int main(){
	int i, j, *p1, *p2, *p3;
	int t1[3][4] = {
		{12,14,16,18},{22,24,26,28},{32,34,36,38}
	};

	int t2[3][4] = {
		{13,15,17,19},{23,25,27,29},{33,35,37,39}
	};

	int t3[3][4];
	printf("\n Tabla t3 es calculada y mostrada:\n\n");

	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			*(t3[i] + j) = *(t1[i] + j) + *(t2[i] + j);
			printf("%d ", *(t3[i] + j)); 
		}
		printf("\n");
	}

	printf("\n\nTabla t3 es calculada y mostrada de nuevo: \n\n");

	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			*(*(t3+i)+j) = *(*(t1+i) + j) + *(*(t2 + i) + j);
			printf("%d ", t3[i][j]);
		}
		printf("\n");
	}

	p1 = (int *) t1;
	p2 = (int *) t2;
	p3 = (int *) t3;
	printf("\n\n Tabla 3 es calculada y mostrada de nuevo: \n\n");
	for(i=0; i<3; i++){
		for(j=0; j < 4; j++){
			*(p3 + i*4 + j) = *(p1 + i*4 + j) + *(p2 + i*4 + j);
			printf("%d ", *(p3 + i*4 + j));
		}
		printf("\n");
	}

	return 0;
}