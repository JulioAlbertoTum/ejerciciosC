// este programa usa una funcion que acepta un puntero a una estructura 
// como un argumento de entrada, y modifica datos encada estructura;

#include <stdio.h>

struct rectangle {
	int height;
	int width;	
};

void doubleIt(struct rectangle *ptr);

int main(){

	struct rectangle rect1 = {10, 15}, rect2 = {25, 35};

	printf("Dimensiones de rect1 antes de la midificacion: \n");
	printf("height: %d\n", rect1.height);
	printf("width: %d\n\n", rect1.width);

	doubleIt(&rect1);

	printf("Dimensiones de rect1 despues de la midificacion: \n");
	printf("height: %d\n", rect1.height);
	printf("width: %d\n\n", rect1.width);

	printf("Dimensiones de rect2 antes de la midificacion: \n");
	printf("height: %d\n", rect2.height);
	printf("width: %d\n\n", rect2.width);

	doubleIt(&rect2);

	printf("Dimensiones de rect2 despues de la midificacion: \n");
	printf("height: %d\n", rect2.height);
	printf("width: %d\n\n", rect2.width);

	return 0;
}

void doubleIt(struct rectangle *ptr)
{
	ptr->height = 2 * ptr->height;
	ptr->width = 2 * ptr->width;

	return ;
}


