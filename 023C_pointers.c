#include <stdio.h>

int main(){
	int myAge = 23;
	int* ptr = &myAge;
	/*
	int* mynum;
	int *mynum;
	*/
	printf("%d\n",myAge);
	printf("%p\n",&myAge);
	printf("%p\n",ptr);
	printf("%d\n",*ptr);

	return 0;
}
