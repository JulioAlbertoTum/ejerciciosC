// usamos una funcion que acepta una estructura como un argumento de entrada
// y retornamos una estrucutra desupes de modificar los datos dentro

#include <stdio.h>

struct rectangle {
	int height;
	int width;
};

struct rectangle doubleIt( struct rectangle ourRect);


int main(){
	struct rectangle rect1 = {10, 15}, rect2 = {25, 35};

	printf("Dimensiones de rect1 antes de la modificacion: \n");
	printf("height: %d\n", rect1.height);
	printf("widht: %d\n", rect1.width);

	rect1 = doubleIt(rect1);

	printf("Dimensiones de rect1 despues de la modificacion: \n");
	printf("height: %d\n", rect1.height);
	printf("widht: %d\n", rect1.width);

	printf("Dimensiones de rect2 antes de la modificacion: \n");
	printf("height: %d\n", rect2.height);
	printf("widht: %d\n", rect2.width);

	rect2 = doubleIt(rect2);

	printf("Dimensiones de rect2 despues de la modificacion: \n");
	printf("height: %d\n", rect2.height);
	printf("widht: %d\n", rect2.width);

	return 0;
}

struct rectangle doubleIt(struct rectangle ourRect){
	ourRect.height = 2 * ourRect.height;
	ourRect.width = 2 * ourRect.width;
	return ourRect;
}