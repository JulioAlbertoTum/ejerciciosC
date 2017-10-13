// Este programa lee la estructura almacenada en el binario agents2.dat
// usando la funcion fread()

#include <stdio.h>

int main(){
	int k = 0, m = 0;
	FILE *fptr;
	struct biodata{
		char name[15];
		int rollno;
		int age;
		float weight;
	};
	struct biodata sa;
	fptr = fopen("agent2.dat", "rb");
	if(fptr != NULL){
		printf("agents.dat se ha abierto exitosamente.\n");
		m = fread(&sa, sizeof(sa), 1, fptr);

	while( m != 0){
		printf("Nombre: %s, Roll no: %d, Edad: %d, Peson: %.1f\n", sa.name, sa.rollno, sa.age, sa.weight);
		m = fread(&sa, sizeof(sa), 1, fptr);
	}

	k = fclose(fptr);
	if( k == -1)
		puts("cierre del file a fallado");
	if( k == 0)
		puts("el cierre ha sido exitoso");
	}else{
		puts("ha fallado al abrir el archivo.");
	}
	return 0;

}