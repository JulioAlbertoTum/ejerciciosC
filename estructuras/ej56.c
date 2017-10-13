// En este programa se usa un array de estructuras ;

#include <stdio.h>
#include <string.h>


int main(){

	

	struct biodata{
		char name[15];
		int rollno;
		int age;
		float weight;
	};

	struct biodata agents[2];

	strcpy(agents[0].name, "Dick");
	agents[0].rollno = 1;
	agents[0].age = 21;
	agents[0].weight =70.6F;

	strcpy(agents[1].name, "Robert");
	agents[1].rollno = 2;
	agents[1].age = 22;
	agents[1].weight =75.8F;


	printf("Biodata del agente # 1: \n");
	printf("\tName: %s\n",agents[0].name);
	printf("\tRoll Number: %d\n", agents[0].rollno);
	printf("\tAge: %d years \n", agents[0].age);
	printf("\tWeight: %.1f kg \n\n", agents[0].weight);

	printf("Biodata del agente # 2: \n");
	printf("\tName: %s\n",agents[1].name);
	printf("\tRoll Number: %d\n", agents[1].rollno);
	printf("\tAge: %d years \n", agents[1].age);
	printf("\tWeight: %.1f kg \n\n", agents[1].weight);	

	return 0;
}