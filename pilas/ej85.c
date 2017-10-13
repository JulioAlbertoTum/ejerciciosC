// implementa  una cola circular sobre un array


#include <stdio.h>
#include <stdlib.h>
#define SIZE 8


int circQue[SIZE];
int frontCell = 0;
int rearCell = 0;
int kount = 0;

void insertCircQue(){
	int num;
	if(kount == SIZE){
		printf("\nLa cola circular esta llena. ingresea a cualquier opcion excepto 1.\n");
	}else{
		printf("\nIngresa datos entre 0 y 30000: ");
		scanf("%d", &num);
		circQue[rearCell] = num;
		rearCell = (rearCell + 1) % SIZE;
		kount++;
		printf("\nDatos insertados en la  lista circular. \n");
	}
}

void deleteCircQue()
{
	if(kount == 0){
		printf("\nLa cola circular esta vacia\n");
	}else{
		printf("\nelemento borrado de la cola es %d \n", circQue[frontCell]);
		frontCell = (frontCell + 1) % SIZE;
		kount--;
	}
}

void displayCircQue(){
	int i, j;
	if(kount == 0){
		printf("\nLa cola circular esta vacia.\n");
	}else{
		printf("\nElementos en cola circular son: \n");
		j = kount;
		for(i=frontCell; j != 0; j--){
			printf("%d ", circQue[i]);
			i = (i+1)% SIZE;
		}
		printf("\n");
	}
}

int displayMenu(){
	int choice;
	printf("\nIngresa 1 para insertar datos.");
	printf("\nIngresa 2 para borrar datos.");
	printf("\nIngresa 3 para mostrar en pantalla.");
	printf("\nIngresa 4 para salir del programa. ");
	printf("\nIngresa tu eleccion: ");
	scanf("%d", &choice);
	return choice;
}

void main()
{
	int choice;
	do{
		choice = displayMenu();
		switch(choice){
			case 1:
				insertCircQue();
				break;
			case 2:
				deleteCircQue();
				break;
			case 3:
				displayCircQue();
				break;
			case 4:
				exit(0);
			default: 
				printf("\nEleccion invalida. Por favor ingresa de nuevo.\n");
		}
	}while(1);
}