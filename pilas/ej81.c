// este programa implementa una pila en terminos de un array

#include <stdio.h>
#include <stdlib.h>
#define STACKSIZE 8

int stack[STACKSIZE];
int intTop = 0;
int stackMenu(void);
void displayStack(void);
void popItem(void);
void pushItem(void);

void main()
{
	int choice;
	do{
		choice = stackMenu();
		switch(choice){
			case 1:
				pushItem();
				break;
			case 2:
				popItem();
				break;
			case 3:
				displayStack();
				break;
			case 4:
				exit(0);
		}
		fflush(stdin);
	}while(1);
}

int stackMenu()
{
	int choice;
	printf("\n\nIngresa 1 para colocar un elemento en la pila.\n");
	printf("\n Ingresa 2 para sacar un elemento de la pila.\n");
	printf("\n Ingresa 3 para mostrar la pila en la pantalla.\n");
	printf("\n Ingresa 4 para parar la ejecution del programa.\n");
	printf("\n Ingresa tu eleccion ( 0 <= N <=4): \n");
	scanf("%d", &choice);
	return choice;
}

void displayStack()
{
	int j;
	if(intTop == 0){
		printf("\n\n La pila esta vacia.");
		return;
	}else{
		printf("\n\nElementos en pila:");
		for(j=intTop-1; j > -1; j--)
			printf("\n%d",stack[j]);
	}
}

void popItem()
{
	if(intTop == 0){
		printf("\n\n La pila esta vacia.");
		return;
	}else{
		printf("\n\n Elemento sacado: %d ", stack[--intTop]);
	}
}

void pushItem()
{
	int data;
	if(intTop == STACKSIZE){
		printf("\n\n Stack esta completamente lleno.");
		return;
	}else{
		printf("\n\nIngresa un numero entre 0 y 30000: ");
		scanf("%d", &data);
		stack[intTop] = data;
		intTop = intTop + 1;
		printf("\n\n Elemento colocado en la pila");
	}
}






