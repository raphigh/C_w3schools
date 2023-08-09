#include <stdio.h>


int main(){

	//make an array
	int arr[] = {1,2,3,40,5,60};
	
	//access to array elements
	printf("%d\n",arr[3]);//outputs 40
	
	//change element
	arr[3] = 4;
	printf("%d\n",arr[3]);

	for(int i = 0 ; i < 6 ; i++){
		printf("%d\n",arr[i]);
	}
	
	//declare array with 4 elements
	
	int arr1[4];

	//assign values to array
	arr1[0] = 20;
	arr1[1] = 30;
	arr1[2] = 40;
	arr1[3] = 50;

	for (int i = 0 ; i < 4 ; i++){
		printf("%d\n",arr1[i]);
	}
	return 0;
}
