// este programa implementa una lista que recorrido hacia adelante y hacia atras.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct members{
	char name[20];
	struct members *forward, *backward;
};

typedef struct members node;

void showforward(node *start);
void showbackward(node *end);

int main()
{
	node m1, m2, m3, *start, *end;

	strcpy(m1.name, "lina");
	strcpy(m2.name, "mina");
	strcpy(m3.name, "bina");

	start = &m1;
	start->forward = &m2;
	start->forward->forward = &m3;
	start->forward->forward->forward = NULL;

	end = &m3;
	end->backward = &m2;
	end->backward->backward = &m1;
	end->backward->backward->backward = NULL;

	printf("Nombres de miembros(recorrido hacia adelante): \n");
	showforward(start);
	printf("\nNombres de miembros(recorrido hacia atras): \n");
	showbackward(end);

	return 0;
}

void showforward(node *start){
	int flag = 1;
	do{
		printf("%s\n", start->name);
		if(start->forward == NULL)
			flag = 0;
		start = start->forward;
	}while(flag);
	return;
}

void showbackward(node *end){
	int flag = 1;
	do{
		printf("%s\n", end->name);
		if(end->backward == NULL)
			flag = 0;
		end = end->backward;
	}while(flag);

	return;
}