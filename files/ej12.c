// este programa escribe estructuras a un archivo binario
// usando la funcion fwrite()

#include <stdio.h>

int main(){
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
	fptr = fopen("agent2.dat", "wb");
	if(fptr != NULL){
		printf("agens2.data se ha abierto exitosamente\n");

		while(flag == 'y'){
			printf("Ingresa nombre, roll no, age, y peso el agente: ");
			scanf("%s %d %d %f", &sa.name, &sa.rollno, &sa.age, &sa.weight);
			fwrite(&sa, sizeof(sa), 1, fptr);
			fflush(stdin);
			printf("Algun record mas (y/n):" );
			scanf(" %c", &flag);
		}
		k = fclose(fptr);
		if(k == -1)
			puts("Cierre del archivo ha fallado");
		if(k == 0)
			puts("SE ha cerrado exitosamente");
	}else{
		puts("apertura del archivo ha fallado");
	}
	return 0;
}