// este programa devuelve  los strings usando una puntero a otro puntero a una array tipo char

#include <stdio.h>

int main(){

	int i, j;
	char ch;

	char cities[5][10] = {
		"Satara","Sangli","karad","Pune","Mumbai"
	};

	char *ptr, **ptrPtr;

	ptrPtr = &ptr;

	for(i=0; i < 5; i++){
		ptr = (char *)cities[i];
		j = 0;
		do{
			ch = *(ptr + j);
			printf("%c", ch);
			j = j + 1;
		}while(ch != '\0');

		printf("\t\t");
		j = 0;
		do{
			ch = *(*ptrPtr + j);
			printf("%c", ch);
			j = j+1;
		}while(ch != '\0');
		printf("\n");
	}
	return 0;
}