// este programa realiza una busqueda lineal para encontrar una data deseado 
// a partir de un conjunto

#include<stdio.h>

int storage[50];
int kount = 0;

int searchData(int intData)
{
	int compare = 0;
	int num = -1;
	int i;

	for(i=0; i < kount; i++){
		compare++;
		if(intData == storage[i]){
			num = i;
			break;
		}
	}
	printf("el numero total de comparaciones es %d", compare);
	return num;
}


void main(){
	int position, intData, i;
	printf("Ingresa el numero datos entr 2 y 50:");
	scanf("%d", &kount);
	printf("Ingresa los %d entero entre 0 y 30000", kount);
	printf("separados por espacios: \n");
	for(i=0; i < kount; i++){
		scanf("%d", &storage[i]);
	}
	fflush(stdin);
	printf("Ingresa el datao D para la busqueda entre 0 y 30000: ");
	scanf("%d",&intData);
	position = searchData(intData);
	if(position != -1){
		printf("\nel elemento dado esta en la posicion ");
		printf("o localizacion: %d\n", (position+1));
	}else{
		printf("El elemento no ha sido encontrado");
	}
}