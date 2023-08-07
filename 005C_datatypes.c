#include <stdio.h>

int main(){
	int myInt = 5 ;
	int yourInt = 6;
	float myFloat = 3.1415926;
	double myDouble = 9.9999999999999999;
	char myChar = 'c';


	printf("my int is %d\n",myInt);
	printf("your int is %i \n",yourInt);
	printf("mychar is %c\n",myChar);
	printf("my float with two point precision is %.2f and my double is %lf with 5 points precision is %.5lf",myFloat,myDouble,myDouble);


	
	
	return 0;
}
