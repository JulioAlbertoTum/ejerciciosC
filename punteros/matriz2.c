// devuelve un valor de un array usando punteros
#include <stdio.h>

int main(){

	int num[3][2] = {
		{14, 457},{24,382},{72,624}
	};

	int (*ptrArray) [2];
	int row, col, *ptrInt;

	for(row =0; row < 3; row++){
		ptrArray = &num[row];
		ptrInt = (int *) ptrArray;
		for(col = 0; col < 2; col++)
			printf("%d ", *(ptrInt + col));
		printf("\n");
	}

	return 0;
}