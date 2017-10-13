#include <stdio.h>

int sumatoria(int m);

int main(){
	int n = 4;
	int r = sumatoria(n);
	printf("Sumatoria de 1 + 2 + 3 + 4 = %d\n", r);
	return 0;
}

int sumatoria(int m)
{
	if (m == 1)
		return 1;
	else
		return ( m + sumatoria(m - 1));
}