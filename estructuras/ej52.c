// mostramos datos almacenados en estructuras anidadas
// el manejo de variables se hace mediante punteros


#include <stdio.h>

int main(){

	struct date{
		int month;
		int day;
		int year;
	};

	struct biodata{
		char name[15];
		int rollno;
		int age;
		float weight;
		struct date joiningDate;
	};

	struct biodata *pt1, sa1 = {"Dick", 1,21, 70.6F, 10,18,2006};
	struct biodata *pt2, sa2 = {"Robert", 2, 22, 75.8F, 8, 24, 2007};
	pt1 = &sa1;
	pt2 = &sa2;

	printf("Biodata de Agent # 1 \n");
	printf("\tName: %s\n", (*pt1).name);
	printf("\tRoll Number: %d\n", (*pt1).rollno);
	printf("\tAge: %d years \n", (*pt1).age);
	printf("\tWeight: %.1f kg\n", (*pt1).weight);
	printf("\tJoining Date: %d/%d/%d\n\n", (*pt1).joiningDate.month,(*pt1).joiningDate.day, (*pt1).joiningDate.year);


	printf("Biodata de Agent # 2 \n");
	printf("\tName: %s\n", (*pt2).name);
	printf("\tRoll Number: %d\n", (*pt2).rollno);
	printf("\tAge: %d years \n", (*pt2).age);
	printf("\tWeight: %.1f kg\n", pt2->weight);
	printf("\tJoining Date: %d/%d/%d\n\n", (*pt2).joiningDate.month,(*pt2).joiningDate.day, (*pt2).joiningDate.year);

	return 0;
}
