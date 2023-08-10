#include <stdio.h>

int main(){
	int arr[4] = {23,13,17,28};
	//print elements using for
	for(int i =0 ; i<4 ; i++){
		printf("%d\n",arr[i]);
	}
	//print elements address
	for (int i=0; i<4; i++){
		printf("%p\n",&arr[i]);
	}
	//size of int
	int myNum;
	printf("%lu\n",sizeof(myNum));

	//array names points to the first element
	printf("arr points to %p \n",arr);
	printf("address of arr[0] is %p\n",&arr[0]);
	printf("%d\n",*arr);
	printf("%d\n",*(arr+1));
	printf("%d\n",*(arr+2));
	
	//iterate array using pointers
	int* ptr = arr;
	for (int i = 0; i < 4; i++){
		printf("%d\n",*(ptr + i));
	}

	//iterate array using pointers without ptr
	for (int i = 0; i< 4; i++){
		printf("%d\n",*(arr+i));
	}
	
	return 0;
}
