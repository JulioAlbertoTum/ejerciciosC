// este programa usa punteros a funciones para implementar 
// sistema de menu basado en texto.

#include <stdio.h>

void cut(int icut);
void copy(int icopy);
void paste(int ipaste);
void delete(int idelete);


int main(){
	void (*funPtr[4])(int) = {cut, copy, paste, delete};
	int choice;
	printf("\nEdit Menu: Ingreses sus opciones( 0, 1, 2, 3).\n");
	printf("Por favor no ingrese otro numero para evitar un error.\n");
	printf("Ingrese 0 para activar cut menu-item.\n");
	printf("Ingrese 1 para activar copy menu-item.\n");
	printf("Ingrese 2 para activar paste menu-item.\n");
	printf("Ingrese 3 para activar delete menu-item.\n");
	scanf("%d", &choice);
	(*funPtr[choice])(choice);
	printf("Gracias.\n");

	return 0;
}

void cut(int icut){
	printf("Ingresaste %d.\n",icut);
	printf("Menu item cut esta activado.\n");
}

void copy(int icopy){
	printf("Ingresaste %d.\n",icopy);
	printf("Menu item copy esta activado.\n");
}
void paste(int ipaste){
	printf("Ingresaste %d.\n",ipaste);
	printf("Menu item paste esta activado.\n");
}
void delete(int idelete){
	printf("Ingresaste %d.\n",idelete);
	printf("Menu item delete esta activado.\n");
}