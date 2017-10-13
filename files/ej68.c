// este programa escribe una estructura a una archivo
// usando la funcion fprintf()

#include <stdio.h>

int main()
{	
	int k = 0;
	char flag = 'y';
	FILE *fptr;
	struct biodata{
		char name[15];
		int rollno;
		int age;
		float weight;
	};

	struct biodata sa;
	fptr = fopen("agents.dat","w");
	if(fptr != NULL){
		printf("el archivo agents.data abierto exitosamente: ");
	

		while(flag == 'y'){
			printf("Ingrese nombre, roll no,  age, y peso del agente: ");
			scanf("%s %d %d %f", &sa.name, &sa.rollno, &sa.age, &sa.weight);
			fprintf(fptr, "%s %d %d %.1f", sa.name, sa.rollno, sa.age, sa.weight);
			fflush(stdin);
			printf("Algun record mas(y/n): ");
			scanf(" %c",&flag);
		}
		k = fclose(fptr);
		if(k == -1)
			puts("Cierre del archivo fallido");
		if(k == 0)
			puts("El file se ha cerrado exitosamente.");
	}else{
		puts("Falla al abrir el archivo");
	}
	return 0;
}











