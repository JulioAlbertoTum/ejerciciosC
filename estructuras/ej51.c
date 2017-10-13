// pasamos argumentos por referencia a una funcion

#include <stdio.h>

void changeCreditCount(int *p1, int *p2);

int main(){
	int cc1 = 15, cc2 = 20;
	printf("computo de control esta en funcion main()");
	printf("cc1 = %d y cc2 = %d\n", cc1, cc2);
	changeCreditCount(&cc1,&cc2);
	printf("computo de control esta en funcion main()");
	printf("cc1 = %d y cc2 = %d\n", cc1, cc2);
	return 0;
}

void changeCreditCount(int *p1,int *p2){
	printf("computo de control esta en la funcion changeCreditCount\n");
	printf("Valores iniciales de *p1 y *p2: \n");
	printf("*p1 = %d y *p2 = %d\n", *p1, *p2);
	*p1 = *p1 * 4;
	*p2 = *p2 * 4;
	printf("Ahora los valores de *p1 y *p2 han cambiado\n");
	printf("*p1 = %d y *p2 = %d\n", *p1, *p2);
	return ;
}