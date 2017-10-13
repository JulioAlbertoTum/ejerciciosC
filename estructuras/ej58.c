// este programa esa un puntero a una funcion para invocar funciones

#include <stdio.h>

int sum(double n1, double n2);
int add(int m1, int m2);

int main(){
	int r;
	int (*ptrFun)();

	ptrFun = sum;
	r = (*ptrFun)(2.3, 4.5);
	printf("(int)(2.3+4.5) = %d\n", r);

	ptrFun = add;
	r = (*ptrFun)(10, 15);
	printf("10+15 = %d\n", r);

	return 0;
}

int sum(double j1, double j2){
	int result;
	result = (int)(j1+j2);
	return result;
}

int add(int k1, int k2){
	return (k1 + k2);
}