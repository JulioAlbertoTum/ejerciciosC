// crear una estructura usando una funcion

#include <stdio.h>

struct rectangle{
	int height;
	int width;
};

struct rectangle makeIt(int height, int width);


int main(){
	struct rectangle rect1, rect2;
	rect1 = makeIt(20, 30);
	rect2 = makeIt(40, 80);

	printf("dimensiones de rect1: \n");
	printf("height: %d\n", rect1.height);
	printf("width: %d\n\n", rect1.width);

	printf("dimensiones de rect2: \n");
	printf("height: %d\n", rect2.height);
	printf("width: %d\n\n", rect2.width);	
	return 0;
}

struct rectangle makeIt(int height, int width){
	struct rectangle  mirectangulo;
	mirectangulo.height = height;
	mirectangulo.width = width;
	return mirectangulo;
}