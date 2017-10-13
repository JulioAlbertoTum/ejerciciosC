// devolver las direcciones de elementos array
// de  dos dimensiones

#include <stdio.h>

int main(){
	int r, c;
	int num[3][2] = {
		{14, 457},{24,382},{72,624}
	};

	for(r=0; r < 3; r++){
		for(c =0; c <2; c++){
			printf("Address de num[%d][%d]: %u \n", r, c, &num[r][c]);
		}
	}

	return 0;
}