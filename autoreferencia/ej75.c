// Este programa implementa una lista simple
// los componentes de la lsita son creados en una sesion iterativa

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct members{
	char name[20];
	struct members *next;
};

typedef struct members node;

void display(node *start);
void create(node *start);

int main()
{
	node *start, *temp;

	start = (node *)malloc(sizeof(node));
	temp = start;
	create(start);

	start = temp;
	printf("\nNombres de todos los miembros: \n");
	display(start);
	return 0;
}

void display(node *start)
{
	int flag = 1;
	do{
		printf("%s\n", start->name);
		if(start->next == NULL)
			flag = 0;
		start = start->next;
	}while(flag);

	return;
}

void create(node *start)
{
	int flag = 1;
	char ch;
	printf("Enter name: ");

	do{
		scanf(" %[^\n]", start->name);
		printf("Algun nombre mas? (y/n): ");
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
}