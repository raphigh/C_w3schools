#include <stdio.h>
//for using math function we have to import math.h library
#include <math.h>
#include <stdlib.h>

int main(){
	
	int num;
	printf("enter your number : ");
	scanf("%d",&num);
	printf("your number square root is %f and the rounded value of root are %f and %f and power 5 of it is %f",sqrt(num),ceil(sqrt(num)),floor(sqrt(num)),pow(num,5));
	const double PI  = 3.1415926;
	double angle = PI/3;
	printf("\nsin : %f, cos : %f, tan : %f",sin(angle),cos(angle),tan(angle));
	//absolute value
	printf("\n%d\n",abs(-6));
	//e^num
	printf("%f\n",exp(num));
	//cube root
	printf("%f\n",cbrt(num));
	printf("your number arcsin : %f arccos: %f arctan : %f",asin(num),acos(num),atan(num));



	return 0;
}
