#include <stdio.h>

int main(){
	//two dimentional arrays

	int matrix [2][3] = {{1,2,4},{3,6,9}};
	
	//access to the element
	printf("%d\n",matrix[0][1]);

	//change element of a matrix
	matrix [0][0] = 9;

	//loop through a matrix
	for (int i = 0 ; i < 2 ; i++){
		for (int j = 0 ; j < 3 ; j++){
			printf("%d\t",matrix[i][j]);
		}printf("\n");
	}
	
	return 0;
}
