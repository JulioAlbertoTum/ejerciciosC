// este program a lee los registros almacenados usando la funcion
// fscanf();

#include <stdio.h>

int main()
{
	int k = 0, m = 0;
	FILE *fptr;

	struct biodata{
		char name[15];
		int rollno;
		int age;
		float weight;
	};

	struct biodata sa;
	fptr = fopen("agents.dat", "r");
	if(fptr != NULL){
		printf("agents.dat se ha abierto exitosamente.\n");
		m = fscanf(fptr, "%s %d %d %f", &sa.name, &sa.rollno, &sa.age, &sa.weight);
		while( m != EOF){
			printf("Nombre: %s, Roll No: %d, Age: %d, Weight: %.1f\n", sa.name, sa.rollno, sa.age, sa.weight);
			m = fscanf(fptr, "%s %d %d %f", &sa.name, &sa.rollno, &sa.age, &sa.weight);
		}
		k = fclose(fptr);
		if(k == -1)
			puts("Cierre del archivo fallido");
		if( k == 0)
			puts("File cerrado exitosamente");
	}else{
		puts("Ha fallado la apertura del archivo");
	}
	return 0;
}