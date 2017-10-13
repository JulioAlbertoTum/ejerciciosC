// Este programa guarda strings usando el tipo char y tipo array char

#include <stdio.h>

int main(){
	int i;
	char name[] = "Shirish";
	char *pname = "Shirish";

	printf("name: %s\n", name);
	printf("pname: %s\n", pname);

	strcpy(name, "Dick"); // 
	pname = "Dick";

	printf("name: %s\n", name);
	printf("pname: %s\n", pname);

	printf("name (all eight bytes): ");
	for(i =0; i< 8; i++)
		printf("%c ", name[i]);

	printf("name (all eight bytes): ");
	for(i =0; i< 8; i++)
		printf("%c ", *(pname + i));

	return 0;

}