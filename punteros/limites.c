// accede a valores fuera de los limites de un array 


#include <stdio.h>

int main(){
	int num[] = {12, 23, 45, 65, 27, 83, 32, 93, 62, 74, 41};
	int *ipt1, *ipt2;

	ipt1 = &num[5];
	ipt2 = &num[6];

	printf("El actual valor de *ipt1: %d\n", *ipt1);
	printf("El actual valor de *ipt2: %d\n", *ipt2);

	ipt1 = ipt1 - 2;
	ipt2 = ipt2 + 3;

	printf("El actual valor de *ipt1: %d\n", *ipt1);
	printf("El actual valor de *ipt2: %d\n", *ipt2);

	ipt1 = ipt1 - 15;
	ipt2 = ipt2 + 22;


	printf("El actual valor de *ipt1: %d\n", *ipt1);
	printf("El actual valor de *ipt2: %d\n", *ipt2);

	return 0;
}