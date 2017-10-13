// este programa implementa  un stack en  terminos de una lista vinculada

#include <stdio.h>
#include <stdlib.h>

struct intStack
{
	int element;
	struct intStack *next;
};

typedef struct intStack  node;

node *begin = NULL;
node *top = NULL;

node* getnode()
{
	node *temporary;
	temporary = (node *)malloc(sizeof(node));
	printf("\nIngrese Elemento entre 0 y 30000: ");
	scanf("%d", &temporary -> element);
	temporary -> next = NULL;
	return temporary;
}

void pushItem(node *newnode)
{
	node *temporary;
	if(newnode == NULL){
		printf("\nLa pila esta llena");
		return;
	}
	if(begin == NULL){
		begin = newnode;
		top = newnode;
	}else{
		temporary = begin;
		while(temporary -> next != NULL)
			temporary = temporary->next;
		temporary -> next = newnode;
		top = newnode;
	}
	printf("\n Elemento se colocado en la pila.");
}


void popitem()
{
	node *temporary;
	if(top == NULL){
		printf("\n La pila esta llena.");
		return;
	}

	temporary = begin;
	if(begin->next == NULL){
		printf("\n Elemento sacado es : %d", top -> element);
		begin = NULL;
		free(top);
		top = NULL;
	}else{
		while(temporary-> next != top){
			temporary = temporary -> next;
		}
		temporary -> next = NULL;
		printf("\n Elemento sacado es: %d", top -> element);
		free(top);
		top = temporary;
	}
}

void displayStack(){
	node *temporary;
	if(top == NULL){
		printf("\nLa pila esta llena ");
	}else{
		temporary = begin;
		printf("\nElementos en el stack : ");
		printf("\nel elemento de mas a la izquierda representa el fondo : ");
		printf("\nel elemento de mas a la derecha representa la cima : \n\n");
		printf("%d", temporary -> element);
		while(temporary != top){
			temporary = temporary -> next;
			printf("\t%d ", temporary -> element);
		}
	}
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

int main(){
	int choice;

	node *newnode;
	do{
		choice = stackMenu();
		switch(choice){
			case 1:
				newnode = getnode();
				pushItem(newnode);
				break;
			case 2:
				popitem();
				break;
			case 3:
				displayStack();
				break;
			case 4:
			exit(0);
		}
		fflush(stdin);
	}while(1);
	return 0;
}








