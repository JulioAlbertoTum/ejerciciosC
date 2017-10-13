// programa que implementa una lista basada en enlaces que
// realiza operaciones de insercion y borrado en todos sus casos
// ademas de funciones de ordenacion y borrada da la lista completa.


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>


struct node   // modelado de una nodo
{
	int data;
	struct node *next;
};

struct node *start = NULL;
struct node *create_all(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *);
struct node *sort_list(struct node *);

int main(int argc, char *argv[]){
	int option;
	do{
		printf("\n\n **** menu principal **** ");
		printf("\n 1: Crear Una lista");
		printf("\n 2: Mostrar una lista");
		printf("\n 3: Adicionar un nodo al inicio");
		printf("\n 4: Adicionar un nodo al final");
		printf("\n 5: Adicionar un nodo antes de uno dado");
		printf("\n 6: Adicionar un nodo despues de uno dado");
		printf("\n 7: Borrar un nodo desde el inicio");
		printf("\n 8: Borrar un nodo desde el final");
		printf("\n 9: Borrar un nodo dado");
		printf("\n 10: Borrar un nodo despues de uno dado");
		printf("\n 11: Borrar la lista completa");
		printf("\n 12: Ordenar la lista");
		printf("\n 13: SALIR");
		printf("\n\n Ingresa tu opcion : ");
		scanf("%d", &option);
		switch(option){
			case 1: start = create_all(start);
					printf("\n Creada link list");
					break;
			case 2: start = display(start);
					break;
			case 3: start = insert_beg(start);
					break;
			case 4: start = insert_end(start);
					break;
			case 5: start = insert_before(start);
					break;
			case 6: start = insert_after(start);
					break;
			case 7: start = delete_beg(start);
					break;
			case 8: start = delete_end(start);
					break;
			case 9: start = delete_node(start);
					break;
			case 10: start = delete_after(start);
					break;
			case 11: start = delete_list(start);
					printf("\n Lista linkeada eliminada");
					break;
			case 12: start = sort_list(start);
					break;
		}
	}while( option != 13);
		getch();
		return 0;
}

struct node *create_all(struct node *start)
{
	struct node *new_node, *ptr;
	int num;
	printf("\n Ingrese -1 al final");
	printf("\n Ingreser el dato:");
	scanf("%d", &num);
	while(num != -1)
	{
		new_node = (struct node *)malloc(sizeof(struct node));
		new_node->data=num;
		if(start == NULL)
		{
			new_node->next = NULL;
			start = new_node;
		}else
		{
			ptr = start;
			while(ptr->next != NULL)
			ptr = ptr->next;
			ptr->next = new_node;
			new_node->next = NULL;
		}
		printf("\n Ingresa el dato : ");
		scanf("%d", &num);
	}

	return start;
}
 

struct node *display(struct node *start)
{
	struct node *ptr;
	ptr = start;
	while(ptr != NULL)
	{
		printf("\t %d", ptr -> data);
		ptr = ptr -> next;
	}
	return start;
}

// inserta el nodo al principio de lal lista
struct node *insert_beg(struct node *start)
{
	struct node *new_node;
	int num;
	printf("\n Ingresa el dato : ");
	scanf("%d", &num);
	new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = num;
	new_node->next = start;
	start = new_node;
	return start;
}

// inserta el nodo al final de la lista
struct node *insert_end(struct node *start)
{
	struct node *ptr, *new_node;
	int num;
	printf("\n Ingresa el dato : ");
	scanf("%d", &num);
	new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = num;
	new_node->next = NULL;
	ptr = start;
	while(ptr -> next != NULL)
	ptr = ptr->next;
	ptr->next = new_node;
	return start;
}
// insertar un node antes de otro dado;
struct node *insert_before(struct node *start)
{
	struct node *new_node, *ptr, *preptr;
	int num, val;
	printf("\n Ingresa el dato: ");
	scanf("%d", &num);
	printf("\n Ingresa el valor del dato que estara antes de insertarlo : ");
	scanf("%d", &val);
	new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = num;
	ptr = start;
	while(ptr -> data != val)
	{
		preptr = ptr;
		ptr = ptr -> next;
	}

	preptr -> next = new_node;
	new_node -> next = ptr;
	return start;
}

//insertar despues de un nodo dado
struct node *insert_after(struct node *start)
{
	struct node *new_node, *ptr, *preptr;
	int num, val;
	printf("\n Ingresa el dato: ");
	scanf("%d", &num);
	printf("\n Ingresa el valor despues que esta despues a sido insertado : ");
	scanf("%d", &val);
	new_node = (struct node *)malloc(sizeof(struct node));
	new_node->data = num;
	ptr = start;
	preptr = ptr;
	while(preptr -> data != val)
	{
		preptr = ptr;
		ptr = ptr->next;
	}	
	preptr->next = new_node;
	new_node->next = ptr;
	return start;
}

struct node *delete_beg(struct node *start)
{
	struct node *ptr;
	ptr = start;
	start = start->next;
	free(ptr);
	return start;
}

struct node *delete_end(struct node *start)
{
	struct node *ptr, *preptr;
	ptr = start;
	while(ptr -> next != NULL){
		preptr = ptr;
		ptr = ptr -> next;
	}
	preptr->next = NULL;
	free(ptr);
	return start;
}

struct node *delete_node(struct node *start)
{
	struct node *ptr, *preptr;
	int val;
	printf("\n Ingrese el valor del nodo que quiere borrar : ");
	scanf("%d", &val);
	ptr = start;
	if(ptr -> data == val)
	{
		start = delete_beg(start);
		return start;
	}else
	{
		while(ptr -> data != val)
		{
			preptr = ptr;
			ptr = ptr -> next;

		}
		preptr -> next = ptr -> next;
		free(ptr);
		return start;
	}
}

struct node *delete_after(struct node *start)
{
	struct node *ptr, *preptr;
	int val;
	printf("\n Ingrese el valor despues del que ha de ser borrado :");
	scanf("%d", &val);
	ptr = start;
	preptr = ptr;
	while(preptr -> data != val)
	{
		preptr = ptr;
		ptr = ptr -> next;
	}
	preptr -> next = ptr -> next;
	free(ptr);
	return start;
}

struct node *delete_list(struct node *start)
{
	struct node *ptr;
	if(start != NULL){
		ptr = start;
		while(ptr != NULL){
			printf("\n %d es el siguiente a ser borrado", ptr -> data);
			start = delete_beg(ptr);
			ptr = start;
		}
	}
	return start;
}

struct node *sort_list(struct node *start)
{
	struct node *ptr1, *ptr2;
	int temp;
	ptr1 = start;
	while(ptr1 -> next != NULL){
		ptr2 = ptr1 -> next;
		while(ptr2 != NULL)
		{
			if(ptr1->data > ptr2->data)
			{
				temp = ptr1 -> data;
				ptr1 -> data = ptr2 -> data;
				ptr2 -> data = temp;
			}
			ptr2 = ptr2 -> next;
		}
		ptr1 = ptr1 -> next;
	}
	return start;
}


