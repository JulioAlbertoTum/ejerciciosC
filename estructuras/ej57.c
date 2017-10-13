// programa interactivo que hace uso de un array de estructuras

#include <stdio.h>


int main(){

	int i; 
	struct biodata{
		char name[15];
		int rollno;
		int age;
		float weight;
	};

	struct  biodata agents[5];

	for(i=0; i < 5; i++){
		printf("\nIngresa datos del agente #%d: \n", i+1);
		printf("Name: ");
		scanf("%s",&agents[i].name);
		printf("Roll Number: ");
		scanf("%d",&agents[i].rollno);
		printf("Age: ");
		scanf("%d",&agents[i].age);
		printf("Weight: ");
		scanf("%f",&agents[i].weight);
	}

	printf("\nAhora los datos ingresados son mostrados.\n\n");

	for(i = 0; i <5; i++){
		printf("Biodata de agente secreto #%d: \n", i+1);
		printf("\tName: %s\n", agents[i].name);
		printf("\tRoll Number: %d\n",agents[i].rollno);
		printf("\tAge: %d years \n", agents[i].age);
		printf("\tWeight: %.1f kg\n\n", agents[i].weight);
	}
	return 0;
}

// linkfloat(){
// 	float number = 10, *pointer;
// 	pointer = &number;
// 	number = *pointer;
// 	return;
// }