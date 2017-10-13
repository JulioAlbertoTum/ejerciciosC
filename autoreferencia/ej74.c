// este programa implementa una lista linkeada simpel usando la funcion malloc()
// un conjunto de componetes son insertados a la lista despuesde ser creada.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct members {
	char name[20];
	struct members *next;
};

typedef struct members node;

void display(node *start);

int main(){
	node *start, *temp = NULL;

	start = (node *)malloc(sizeof(node));
	strcpy(start->name, "lina");
	start->next = (node *)malloc(sizeof(node));
	strcpy(start->next->name, "mina");
	start->next->next = (node *)malloc(sizeof(node));
	strcpy(start->next->next->name, "bina");
	start->next->next->next = NULL;

	printf("Nombres de todos los miembros: \n");
	display(start);

	printf("\nInsertando sita a la primera posicion\n");
	temp = (node *) malloc(sizeof(node));
	strcpy(temp->name, "sita");
	temp -> next = start;
	start = temp;
	display(start);

	printf("\nInsertando tina entre lina y mina\n");
	temp = (node *)malloc(sizeof(node));
	strcpy(temp->name, "tina");
	temp->next = start->next->next;
	start->next->next = temp;
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