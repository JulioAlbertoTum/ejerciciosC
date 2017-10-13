#include <stdio.h>

void input(int mat[][12], int, int);
void output(int mat[][12], int, int);
void add(int matA[][12], int matB[][12], int matC[][12], int, int);

int main(){
	int row, col;
	int A[12][12], B[12][12], C[12][12];

	do{
		printf("Ingresa el numero de filas entre 1 y 12: ");
		scanf("%d", &row);
	}while((row < 1)||(row > 12));

	do{
		printf("Ingresa el numero de columnas entre 1 y 12: ");
		scanf("%d", &col);
	}while((col < 1)||(col > 12));

	printf("\nIngresa datos para la matriz A: \n");
	input(A, row, col);
	printf("\n");
	printf("\nMatriz A ingresada por ti: \n");
	output(A, row, col);

	printf("\nIngresa datos para la matriz B: \n");
	input(B, row, col);
	printf("\n");
	printf("\nMatriz B ingresada por ti: \n");
	output(B, row, col);

	add(A,B,C, row, col);
	printf("\nMatriz A + Matriz B = Matric C. \n");
	printf("Matriz C :\n");
	output(C, row, col);
	printf("\nGracias. \n");
	return 0;
}

void input(int mat[][12], int row, int col){
	int i, j;
	for(i = 0; i < row; i++){
		printf("Ingresa %d valores para la fila Nro. %d : ", col,i);
		for(j=0; j < col; j++){
			scanf("%d", &mat[i][j]);
		}
	}
}

void output(int mat[][12], int row, int col){
	int i,j;
	for( i = 0; i < row; i++){
		for(j=0; j <col ; j++){
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
}

void add(int matA[][12], int matB[][12], int matC[][12], int m, int n){
	int i,j;
	for(i=0; i < m; i++){
		for(j=0; j < n; j++){
			matC[i][j] = matA[i][j] + matB[i][j];
		}
	}
}