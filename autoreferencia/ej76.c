// este programa implementa una lista linkeada simple con 
// una calidad profesional

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct members{
	char name[20];
	struct members *next;
};

typedef struct members node;

int menu(void);
void create(node *start);
void display(node *start);
node *insert(node *start);
node *delete(node *start);
node *location(node *start, char target[]);


int main(){
	node *start = NULL, *temp;
	int selection;

	do{
		selection = menu();
		switch(selection){
			case 1:
				start = (node *) malloc(sizeof(node));
				temp = start;
				create(start);
				start = temp;
				display(start);
				continue;
			case 2:
				if(start == NULL){
					printf("\nLista esta vacia selecciona la opcion 1.\n");
					continue;
				}
				start = insert(start);
				display(start);
				continue;
			case 3:
				if(start == NULL){
					printf("\nLa Lista esta vacia! selecciona la opcion 1.\n");
					continue;
				}
				start = delete(start);
				display(start);
				continue;

			default:
				printf("\nFin de la sesion\n");
		}
	}while(selection != 4);
	
	return 0;
}

int menu(void)
{
	int selection = 0;
	do{
		printf("\nSeleccione la operacion deseada:\n");
		printf("Ingrese 1 para crear una lista nueva\n");
		printf("Ingrese 2 para insertar un componente en la lista\n");
		printf("Ingrese 3 para borrar un componente de tu lista\n");
		printf("Ingrese 4 para terminar sesion.\n");
		printf("Ahora Ingrese el numero (1,2,3,4): ");
		scanf("%d", &selection);
		if((selection < 1) || (selection > 4))
			printf("Numero invalido! Porfavor intenta de nuevo.\n");
	}while((selection > 1) || (selection > 4));

	return selection;
}

void create(node *start)
{
	int flag = 1;
	char ch;
	printf("Ingresa nombre: ");
	do{
		scanf(" %[^\n]", start->name);
		printf("Algun otro nombre?(y/n): ");
		scanf(" %c", &ch);
		if(ch == 'n'){
			flag = 0;
			start->next = NULL;
		}else{
			start->next = (node *)malloc(sizeof(node));
			start = start->next;
			printf("Ingresa nombre: ");
		}
	}while(flag);

	return;
}

void display( node *start)
{
	int flag = 1;
	if(start == NULL)
	{
		printf("\nLa lista esta vacia! selecciona la opcion 1.\n");
		return ;
	}
	printf("\nNombres de todos los miembros en la lista: \n");

	do{
		printf("%s\n", start->name);
		if(start->next == NULL)
			flag = 0;
		start = start->next;
	}while(flag);

	return;
}

node *insert(node *start)
{
	int flag = 1;
	node *new, *before, *tmp;
	char newName[20];
	char target[20];

	printf("Ingresa nombre a ser insertado: ");
	scanf(" %[^\n]", newName);
	printf("antes de colocar un lugar? Tipea \"last \" si es ultimo: ");
	scanf("%[^\n]", target);

	if(strcmp(target, "last") == 0){
		tmp = start;

		do{
			start = start->next;
			if(start->next == NULL){
				new = (node *) malloc(sizeof(node));
				strcpy(new->name, newName);
				start->next = new;
				new->next = NULL;
				flag = 0;
			}
		}while(flag);

		start = tmp;
		return start;
	}

	if(strcmp(start->name, target) == 0){
		new = (node *)malloc(sizeof(node));
		strcpy(new->name, newName);
		new->next = start;
		start = new;
	}else{
		before = location(start, target);
		if(before == NULL)
			printf("\nEntrada invalida. Intenta de nuevo\n");
		else{
			new = (node *)malloc(sizeof(node));
			strcpy(new->name, newName);
			new->next = before->next;
			before->next = new;
		}
	}
	return start;
}

node *delete(node *start)
{
	node *before, *tmp;
	char target[20];

	printf("\nIngresa nombre a ser borrado: ");
	scanf(" %[^\n]", target);

	if(strcmp(start->name, target) == 0){
		if(start->next == NULL){
			free(start);
			start = NULL;
		}else{
			tmp = start->next;
			free(start);
			start = tmp;
		}
	}else{
		before = location(start, target);
		if(before == NULL)
			printf("\nEntrada invalida. Hazlo de nuevo.\n");
		else{
			tmp = before->next->next;
			free(before->next);
			before->next = tmp;
		}
	}
	return start;
}

node *location(node *start, char target[]){
	int flag = 1;
	if(strcmp(start->next->name, target) == 0)
		return start;
	else if(start->next == NULL)
			return NULL;
	else {
		do{
			start = start->next;
			if(strcmp(start->next->name, target) == 0)
				return start;
			if(start->next == NULL){
				flag = 0;
				printf("Entrada invalida. Intente de nuevo.\n");
			}
		}while(flag);
	}
	return NULL;
}