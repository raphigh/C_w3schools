#include<stdio.h>

int main(){
	const int myInt = 15;
	//myInt = 5; //error
	/* when you make a const you have to assign
	const float Pi;
	Pi = 3.14 will give you error
	*/
	const double Pi = 3.1415926;
	int r = 4;
	double area = (float) Pi * r * r;
	printf("%lf",area);
	return 0;
}
