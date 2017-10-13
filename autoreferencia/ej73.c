// este programa implementa una lista linkeada simple
// se crean  los componentes con malloc
// algunos de los componentes seran borrados

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

	start = (node *) malloc(sizeof(node));
	strcpy(start->name, "lina");
	start->next = (node *)malloc(sizeof(node));
	strcpy(start->next->name, "mina");
	start->next->next = (node *)malloc(sizeof(node));
	strcpy(start->next->next->name, "bina");
	start->next->next->next = (node *)malloc(sizeof(node));
	strcpy(start->next->next->next->name, "tina");
	start->next->next->next->next = NULL;

	printf("nombres de todos los miembros: \n");
	display(start);

	printf("\nBorrando primer elemento - lina\n");
	temp = start->next;
	free(start);
	start = temp;
	temp = NULL;
	display(start);

	printf("\nborrando algo que no es el primer componente - bina\n");
	temp = start->next->next;
	free(start->next);
	start->next = temp;
	temp = NULL;
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