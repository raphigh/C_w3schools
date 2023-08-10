#include <stdio.h>


//declaration
int sumfunc(int,int);


int main(){

	int x;
	int y;
	printf("enter the first number : " );
	scanf("%d",&x);
	printf("enter the second number : ");
	scanf("%d",&y);
	printf("the sum of your numbers is : %d ",sumfunc(x,y));
	
	return 0;
}


int sumfunc(int x, int y){
	return x + y;
}
